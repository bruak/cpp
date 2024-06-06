#include "Weapon.hpp"

Weapon::Weapon(std::string const &weapon_type){
    type = weapon_type;
}

Weapon::~Weapon() {}

std::string Weapon::getType() const{
    return type;
}

void Weapon::setType(const std::string &weapon_type){
    type = weapon_type;
}
