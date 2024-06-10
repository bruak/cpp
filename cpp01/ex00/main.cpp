#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Heap Zombie");
	zombie->announce();
	delete zombie;

	randomChump("Stack Zombie");

	return (0);
}

/*

stack üzerindekileri sıra sıra dizilmiş 
otomatik olarak yer ayıran birer bellek alanı olarak
düşünmek gerekir burdaki her şey sıralıdır ve
program kapanınca hepsi silinir.

heapta ise işler biraz daha farklı belleğin rastgele 
noktalarından gelir ve gelen bu adresleri manuel olarak
yönetmemiz gerekir c++ 11 den sonra bunun önüne
akıllı işaretçilerle geçilmiştir. örnek olarak 
std::unique_ptr<int> heapVariable = std::make_unique<int>(10);
gibi bir kullanım otomatik new yapar 
ve delete işlemi ile siler.
ayrıca bu heap üzerindeki yerler delete edilmezse sistem
rami tükenir ve sistem çökebilir ayrıca bu bellek sızıntısı
birikimi performansı ciddi ölçüde düşürebilir.
günümüzde kullanıdğımız server side işlemlerinde de 
bu tarz çökmeler sürekli olmaktadır.

ayrıca bu heap ve stack işlemleri birbirleri ile 
ilişkilidir. stack üzerindeki bir işaretçi heap üzerindeki
bir işaretçiye işaret edebilir. bu durumda stack üzerindeki
işaretçi silinse bile heap üzerindeki işaretçi silinmez.
bu durumda bellek sızıntısı oluşur.

*/