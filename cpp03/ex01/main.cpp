#include "ScavTrap.hpp"


// mesajlar düzenlenecek 
// testler yapılacak

int main()
{
    //ClapTrap a;
    //ClapTrap b("b");
    //a.attack("test 1");
    //a.takeDamage(1), a.takeDamage(100), a.beRepaired(100);
    //a.attack("test 1");
//
    //b.beRepaired(100);
    //for (int i = 0; i < 12; i++)
    //    b.attack("for test area");
    //b.beRepaired(10);

    ScavTrap a;
    ScavTrap b("b");
    a.attack("test 1");
    a.takeDamage(1), a.takeDamage(100), a.beRepaired(100);
    a.attack("test 1");

    b.beRepaired(100);
    for (int i = 0; i < 12; i++)
        b.attack("for test area");
    b.beRepaired(10);
    b.guardGate();
    b.guardGate();
}