#include <string>
#include <iostream>
#include <fstream>

#define ERROR_EXIT 1
#define INVALID_ARGS_SIZE "Invalid number of arguments.\n"
#define USAGE "Usage: ./replace <file_name> <search> <replace>\n"
#define SOURCE_FILE_ERROR "Error opening source file"
#define OUTPUT_FILE_ERROR "Error opening output file"
#define FILE_EXTENSION ".replace"
#define NEW_LINE '\n'

void displayUsage() {
    std::cout << INVALID_ARGS_SIZE
              << USAGE;
}

int handleError(std::ifstream &file, const std::string &errorMsg) {
    std::perror(errorMsg.c_str());
    file.close();
    return ERROR_EXIT;
}

std::string replaceAllOccurrences(std::string line, const std::string &toFind, const std::string &toReplace) {
    size_t pos = line.find(toFind);
    while (pos != std::string::npos) {
        line.replace(pos, toFind.length(), toReplace);
        pos = line.find(toFind, pos + toReplace.length());
    }
    return line;
}

int main(int argc, char* argv[]) {

    if (argc != 4) {
        displayUsage();
        return ERROR_EXIT;
    }

    std::string file_name = argv[1];
    std::string toFind = argv[2];
    std::string toReplace = argv[3];

    std::ifstream sourceFile(file_name.c_str());

    if (!sourceFile.is_open())
        return handleError(sourceFile, SOURCE_FILE_ERROR);

    std::ofstream outputFile((file_name + FILE_EXTENSION).c_str(), std::ios::out | std::ios::trunc);    
    if (!outputFile.is_open())
        return handleError(sourceFile, OUTPUT_FILE_ERROR);

    std::string line;
    while (std::getline(sourceFile, line)) {
        outputFile << replaceAllOccurrences(line, toFind, toReplace);
        if (!sourceFile.eof()) 
            outputFile << NEW_LINE;
    }

    sourceFile.close();
    outputFile.close();

    return 0;
}
 