#include "Zombie.hpp"

#define Zombie_num 3

int main()
{
	Zombie *zombie;

	zombie = zombieHorde(Zombie_num, "abdulzerrak");

	for (int i = 0; i < Zombie_num; i++){
		zombie[i].announce();
	}

	delete [] zombie;

	return (0);
}


/*
	istenilen zombi sayısı kadar işaretçi oluşturuluyor.
	bu işaretçinin ilk adresi geliyor c dilindeki arrayler gibi.
	sonra bu işaretçiye zombi sayısı kadar dolaşarak isim ekleniyor.
	sonra bu işaretçi return ediliyor.
	ilk adresten başlayarak zombi sayısı kadar dolaşarak isimler yazdırılıyor.
	sonra işaretçi siliniyor. [] olarak silmesinin nedeni new [] olarak açıldıktan sonra
	[] olarak silinmesi gerektiğidir. çünkü [] ile silinip tüm destructorlar çağrılır.
*/