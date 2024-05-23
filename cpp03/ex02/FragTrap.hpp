#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

        void highFiveGuys(void);
};

#endif