#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    //HumanA her zaman silaha sahip olamak zorunda olduğu için parametre bekler.:9

    /*
    humanA üzerinde sürekli silah olacağından dolayı pointer olmasına gerek yoktur çünkü pointer olursa
    ayrıca var mı yok mu diye kontrol etmek gerekir ve bu gereksiz bir işlem olur.
    referans koyarak doğrudan silahı atayabiliriz.
    */
    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.setWeapon(club); // neden birinde referans kullanılırken diğerinde pointer kullanıldı
        jim.attack();
        Weapon club2 = Weapon("crude spiked club2");
        jim.setWeapon(club2);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

/*
buradaki scope değerleri yeni bir değer yaratıp o değerin 
o scope içinde kalmasını sağlar.
*/


/****************************** *!!!!!!!!!!
HumanA sınıfı bir kere oluştuktan sonra bir daha sınıfı değiştiremez
çünkü referansla beraber oluştuğu için o referansı kendi değişkenine 
atayarak kalıcılık sağlar 
ama pointerler işaret ettiği değeri değiştirebilirler.
*/