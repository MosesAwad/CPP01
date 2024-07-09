
#include "Zombie.hpp"

int main()
{
	int		N;
	Zombie	*zombie_Horde;

	N = 10;
	zombie_Horde = zombieHorde( N, "Thing X");

	for (int i = 0; i < N; i++) {
		zombie_Horde[i].announce();
	}

	delete[] zombie_Horde;
}
