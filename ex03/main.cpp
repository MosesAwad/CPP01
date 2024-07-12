
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
	In the second code block, I was experimenting what it means to habe
	a constant reference to a string as the return type for the weapon
	type lol. What an ugly sentence. Anyways, to return a reference means
	you are returning the actual type string from the class itself! Not
	a copy, like literally it. YOu can even change it by setting var to
	"new weapon" and that would change it from "crude spiked club". At
	the beginning, I was confused, like why is it allowing me to change
	it even though type is a private attribute of the class weapon. The
	reason is because the getType function is a getter and since it is 
	a member function, it can access it. And since the getter can return
	a reference, it is like it extracted the type from the class and set
	it free for us. But if we were to try and access the type directly
	by saying club.type and set it to var, we wouldn't be able to because
	type is not accessible as it is a private member.

	Lastly, since it is a reference to the type itself and I set it to
	private, I don't want anyone to be able to mess with it. So that is
	why I set it to const! If I set the return type of the function to
	const, then no one would be able to change it. Hence, getType() would
	only be able to return to const variables.
*/
int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();

		club.setType("some other type of club");
		bob.attack();

	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);

		/*
			Experiment 1
		*/
		// const std::string &var = club.getType();
		// var = "new weapon";
		
		/* 
			Experiment 2
			To test this line, remove the const
			keyword from the getType() function.
		*/
		// std::string &var = club.getType();
		// var = "new weapon";

		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jones("Jones");
		jones.attack();
		club.setType("some other type of club");
		jones.attack();
		club.setType("Elite spiked club");
		jones.setWeapon(club);
		jones.attack();
	}
	return (0);
}
