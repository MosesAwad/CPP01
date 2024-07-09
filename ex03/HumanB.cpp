
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL)
{
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon bruh" << std::endl;
}

/*
	Here, this operator '&' can either recieve a pointer
	or a reference. It works for both. Anyways, the main
	difference here is that now, this->weapon (which is
	the weapon member of our HumanB class) is a pointer,
	so it has to take the address of the weapon variable
	we sent. So when we pass &weapon, we pass the address
	of weapon to the function but inside the function, we
	don't need to dereference, it defaults to the variable
	automatically in CPP, unlike in C. But since this->weapon
	is now a pointer, and not a reference (which is just an
	alias for a variable), we have to pass in the address
	of the weapon (the weapon are sending to our class) by
	saying &weapon. 
*/
void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
