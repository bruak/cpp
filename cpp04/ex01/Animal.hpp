#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Fill_brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string incoming_type);

        virtual ~Animal(void); // Virtual destructor kullanılıyor bunun için bir leak var mı bu kontrol edilecek.
        Animal(const Animal& src);

        virtual void makeSound() ; //virtual
        //virtiual görünürde leak yok fakat neden kullanılmalı bu araştırılacak.
        std::string getType();


};

#endif



//virtual açıklanırken çıktıyla karşılaştırılacak.
    /*
        Virtual destructor:
        A virtual destructor is used to free up the memory space allocated by 
        the derived class object or instance while deleting instances of the derived
        class using a base class pointer object. A base or parent class destructor
        use the virtual keyword that ensures both base class and the derived class 
        destructor will be called at run time, but it called the derived class first
        and then base class to release the space occupied by both destructors.

        Every destructor down gets called no matter what. virtual makes sure it
        starts at the top instead of the middle.

        Virtual destructors are useful when you might potentially delete an instance 
        of a derived class through a pointer to base class:
    */