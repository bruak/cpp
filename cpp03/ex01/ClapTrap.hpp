#pragma once

#include <string>

class ClapTrap{
    protected:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
		ClapTrap(const ClapTrap &copy);
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &copy);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
