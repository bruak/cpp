#pragma once

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool is_already_guarding;
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);

        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate(void);
};