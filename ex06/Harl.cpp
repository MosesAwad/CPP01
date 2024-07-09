
#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout <<
		"I love having extra bacon for my 7XL-double-cheese-triple"
		"-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::info( void )
{
	std::cout <<
		"I cannot believe adding extra bacon costs more money. You didn’t put"
		" enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl;
}

void	Harl::warning( void )
{
	std::cout <<
		"I think I deserve to have some extra bacon for free. I’ve been coming"
		" for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error( void )
{
	std::cout <<
		"This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain( std::string level )
{
	int				level_index;
	int				i;
	std::string		level_list[4];

	level_list[0] = "DEBUG";
	level_list[1] = "INFO";
	level_list[2] = "WARNING";
	level_list[3] = "ERROR";

	i = 0;
	while (i < 4)
	{
		if (level_list[i] == level)
			break ;
		i++;
	}
	level_index = i;
	switch(level_index)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << "\n";
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << "\n";
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << "\n";
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			std::cout << "\n";
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
