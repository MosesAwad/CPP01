
# include "Zombie.hpp"

int main()
{
	std::cout << "-------Stack Zombie-------" << std::endl;
	Zombie	zombie1("Jack");
	zombie1.announce();
	std::cout << "\n";

	std::cout << "-------Heap Zombie-------" << std::endl;
	Zombie	*zombie2 = newZombie("Jill");
	zombie2->announce();
	std::cout << "\n";

	std::cout << "---Another Stack Zombie---" << std::endl;
	randomChump("Dimitrescu");

	delete(zombie2);
}
