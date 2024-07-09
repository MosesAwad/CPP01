
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

/*
	In this example, I can't use a constructor that takes the
	name directly. That is because I need to allocate memory
	for an array of zombies in the zombieHorde() function. So,
	because of that, when I try to allocate memory for an array
	which is as follows Zombie *zombie_Horder = new Zombie[N], I
	cannot fit the name into that line. So, I have to stick to a
	default constructor and instead, use a setter to set the name.
*/
class	Zombie
{
	std::string	name;

	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_Name( std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif