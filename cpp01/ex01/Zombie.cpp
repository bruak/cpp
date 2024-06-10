#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie(){
	std::cout << Name << ": is dead :) like a philo" << std::endl;
}

void Zombie::announce(void){
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
