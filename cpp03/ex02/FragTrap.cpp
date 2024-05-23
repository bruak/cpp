#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "| FragTrap | " << Name << " is created a construction" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "| FragTrap | " << Name << " is made and set the variables" << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "| FragTrap | " << Name << " is created a copy" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "| FragTrap | " << Name << " is destructed all" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "| FragTrap | " << Name << " is slapping high fives :)" << std::endl;
}