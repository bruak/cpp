#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(){
    Name = "ClapTrap(default name)";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "<ClapTrap---> Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->energyPoints = 10;
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->Name = name;
    std::cout << "<ClapTrap---> " << Name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "<ClapTrap---> Destructor is called" << std::endl;
}


void ClapTrap::attack(std::string const &target){
    if (this->energyPoints <= 0 || this->hitPoints <= 0) {
        std::cout << "<ClapTrap---> " << Name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "<ClapTrap---> " << Name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hitPoints <= 0) {
        std::cout << "<ClapTrap---> " << Name << " has no hit points left!" << std::endl;
        return;
    }
    std::cout << "<ClapTrap---> " << this->Name << " takes " << amount << " points of damage!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoints <= 0 || this->hitPoints <= 0) {
        std::cout << "<ClapTrap---> " << Name << " has no energy or hit points left to be repaired!" << std::endl;
        return;
    }
    std::cout << "<ClapTrap---> " << Name << " is repaired for " << amount << " points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    this->Name = copy.Name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return *this;
}