#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string Name;

	public:
		Zombie();
		~Zombie();
		
		void add_name_for_private_variable(std::string incomingName);
		void announce(void);
};


Zombie* zombieHorde( int N, std::string name );
