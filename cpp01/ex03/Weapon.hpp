#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon {
    public:
        Weapon(std::string const &weapon_type);
        ~Weapon();

        std::string getType() const;
        void setType(const std::string &weapon_type);
    private:
        std::string type;       
};


#endif