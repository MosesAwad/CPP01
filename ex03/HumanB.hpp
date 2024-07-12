
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

/*
	Here we set weapon as a pointer and not as a reference for one
	main reason. A reference cannot be set to NULL like a pointer,
	it is simply an alias for another varaible but it can be used
	like a pointer to pass a variable by reference. Anyways, the
	main point is that a reference cannot be set to NULL.
	
	So, because HumanB has the option to not wield a weapon, we
	have to be able to set weapon to NULL. And thus, we use a pointer.
*/
class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif