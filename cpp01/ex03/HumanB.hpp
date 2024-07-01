#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
    public:
        HumanB(std::string const &name);
        ~HumanB();


        void setWeapon(Weapon &weapon);
        void attack();
    
    private:
        std::string name;
        Weapon *weapon;
};


/*
Human a ve b arasındaki referans ve pointer farkı neden var ve sadece
neden huyman b üzerinde set weaopon var

*/