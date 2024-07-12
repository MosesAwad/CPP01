
#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<
		"I love having extra bacon for my 7XL-double-cheese-triple"
		"-pickle-specialketchup burger. I really do!\n"
		<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout <<
		"I cannot believe adding extra bacon costs more money. You didn’t put"
		" enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
		<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<
		"I think I deserve to have some extra bacon for free. I’ve been coming"
		" for years whereas you started working here since last month.\n"
		<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<
		"This is unacceptable! I want to speak to the manager now.\n"
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
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			this->warning();
			this->error();
			break ;
		case 3:
			this->error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
