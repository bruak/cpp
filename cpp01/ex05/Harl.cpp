#include "Harl.hpp"


#define DEBUG "\033[1;36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\033[0m\n"
#define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
#define WARNING "\033[1;33mI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\033[0m\n"
#define ERROR "\033[1;31mThis is unacceptable! I want to speak to the manager now.\033[0m\n"


Harl::Harl(void) {
    return;
}

Harl::~Harl(void) {
    return;
}	

void Harl::complain(std::string level) {

    void (Harl::*actions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            (this->*actions[i])();
    }
}

void Harl::debug(void) {
    std::cout << DEBUG;
    return;
}

void Harl::info(void) {
    std::cout << INFO;
    return;
}

void Harl::warning(void) {
    std::cout << WARNING;
    return;
}

void Harl::error(void) {
    std::cout << ERROR;
    return;
}

void harlComplains(void) {
    std::cout << "Harl's burger problem\n";


    std::cout << " ____  _   _ ____   ____ _____ ____  \n"
                 "| __ )| | | |  _ \\ / ___| ____|  _ \\ \n"
                 "|  _ \\| | | | |_) | |  _|  _| | |_) |\n"
                 "| |_) | |_| |  _ < | |_| | |___|  _ < \n"
                 "|____/ \\___/|_| \\_\\ \\____|_____|_| \\_\\\"\n";

    std::cout << "\nMANUEL\n";

    std::cout << "\033[1;36m[DEBUG]\033[0m\n" << DEBUG;
    std::cout << "[INFO]\n" << INFO;
    std::cout << "\033[1;33m[WARNING]\033[0m\n" << WARNING;
    std::cout << "\033[1;31m[ERROR]\033[0m\n" << ERROR;

    std::cout << "\033[1;35mwhat u wanna do?\033[0m\n";

    return;
}