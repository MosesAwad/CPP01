
# include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}


/* Constructor Version 1 */
/*
	This thing following the function prototype is called an initializer list.
	1. It initializes the member variable 'name' (HumanA CLASS MEMBER) with the value of the parameter 'name' (FUNCTION PARAMETER).
	2. It initializes the member variable 'weapon' (HumanA CLASS MEMBER) with the value of the parameter 'weapon' (FUNCTION PARAMETER).

	An initializer list is required in this case because one of my class members is an object (Weapon)
	an not a primitive type like string, int, float, and so on. Thus, that member, the weapon member
	has to be explicitly initalized in the Initializer list of the constructor. You can also do it
	for primitive types like name which is a string BUT it is not mandatory, as Constructor Versions 2
	and 3 still work. But version 4 defintely does not.
*/ 
HumanA::HumanA( std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

/* Constructor Version 2 */
/*
	HumanA::HumanA( std::string name, Weapon& weapon) : weapon(weapon)
	{
		this->name = name;
	}
*/

/* Constructor Version 3 */
/*
	HumanA::HumanA( std::string name, Weapon& weapon) : name(name), weapon(weapon)
	{
			this->name = name;
	}
*/


/*	Wrong Constructor Version 4 */
/*
	THIS WOULD NOT WORK! YOU WOULD GET THE FOLLOWING ERROR:
		error: constructor for 'HumanA' must explicitly initialize the reference member 'weapon' 

*/
/*
	HumanA::HumanA( std::string name, Weapon& weapon)
	{
		this->name = name;
		this->weapon = weapon;
	}
*/
