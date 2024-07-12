
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

/*
	You have to pass a reference to a weapon because otherwise,
	you would have to create/initialize the weapon directly from
	within the class since it's private, more specifically
	via a setter function. But since the subject pdf states this:

	int main()
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();

		return (0);
	}

	Then clearly, we have to pass a weapon that has already been
	created to the HumanA class. Additionaly, since the weapon is
	passed by reference to the class, that is why we can do club.setType(
	"some other type of club") from outside the HumanA class and the
	change would still be reflected in the HumanA class.
*/

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA( std::string name, Weapon &weapon);
		void	attack();
};

# endif