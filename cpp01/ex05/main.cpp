#include "Harl.hpp"

#define USAGE "Usage: " << av[0] << " before input a value, when u run the program will se the manuel" << std::endl


int main(int ac, char *av[]){
    Harl harl;
    std::string level;

    if (ac != 1)
        return (std::cout << USAGE), 1;       
    else{
        harlComplains();
        std::cin >> level;
        harl.complain(level);
    }

    return (0);
}