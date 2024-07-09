
#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void	Zombie::set_Name( std::string name )
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed." << std::endl;
}
