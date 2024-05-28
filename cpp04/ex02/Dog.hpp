#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
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