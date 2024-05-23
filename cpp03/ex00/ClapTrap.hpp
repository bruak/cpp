#include <string>

class ClapTrap{
    private:
        std::string Name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
		ClapTrap(const ClapTrap &copy);
        ClapTrap(std::string name);
        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
