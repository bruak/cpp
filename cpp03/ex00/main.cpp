#include "ClapTrap.hpp"

int main()
{
    ClapTrap humans("humans");
    ClapTrap enemy("bandits");

    humans.attack("Enemy");
    humans.takeDamage(2);
    humans.beRepaired(2);

    enemy.attack("humans");
    enemy.takeDamage(10);
    enemy.takeDamage(2);

}