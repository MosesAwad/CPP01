
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

void	Harl::warning (void )
{
	std::cout <<
		"I think I deserve to have some extra bacon for free. I’ve been coming"
		" for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error ( void )
{
	std::cout <<
		"This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain( std::string level )
{
	void			(Harl::*func[4])( void );
	std::string		options[4];
	int				i;

	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;

	options[0] = "DEBUG";
	options[1] = "INFO";
	options[2] = "WARNING";
	options[3] = "ERROR";

	i = 0;
	while (i < 4)
	{
		if (level == options[i])
			break ;
		i++;
	}

	if (i < 4)
		(this->*func[i])();
	else
		std::cerr << "Error: Please choose a valid option." << std::endl;
}
