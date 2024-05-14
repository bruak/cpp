#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name ){

    Zombie *too_many_zombies = new Zombie[N];

    for (int i = 0; i < N; i++){
        too_many_zombies[i].add_name_for_private_variable(name);
    }

    return too_many_zombies;
}