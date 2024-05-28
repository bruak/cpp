#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();

        Dog (Dog &src);

        Dog &operator=(const Dog &src);

        void makeSound();
};


#endif