#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

// member initializer list


HumanA::~HumanA() {}

void HumanA::attack(){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}


/*

 : name(name), weapon(weapon
 şeklinde kullanılmasının sebebi, HumanA sınıfının bir nesnesi oluşturulurken,
  bu nesnenin name ve weapon değişkenlerine değer atamak için kullanılır.
  scope içinde kullanuılmaz çünkü bu class daha oluşmadan önce bu değerlerin 
  atanmış olması gerekmektedir.

*/