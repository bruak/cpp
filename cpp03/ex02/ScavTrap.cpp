#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->is_already_guarding = false;
    std::cout << "<ScavTrap--> Default Constructor called by " << this->Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    this->is_already_guarding = copy.is_already_guarding;
    std::cout << "<ScavTrap--> Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->is_already_guarding = false;
    std::cout << "<ScavTrap--> Constructor for the name " << this->Name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<ScavTrap--> Deconstructor for " << this->Name << " called" << std::endl;
}	

void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "<ScavTrap--> " << this->Name << " hit to " << target << "this much -> " << this->attackDamage << " to bring into being damage! ";
        this->energyPoints--;
        std::cout << this->Name << " has " << this->energyPoints << " energy points left." << std::endl;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << "<ScavTrap--> " << this->Name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
    }
    else
    {
        std::cout << " <ScavTrap--> " << this->Name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "<ScavTrap--> " << this->Name << " is not able to enter in Gate keeper mode, because he has not enough hit points." << std::endl;
}