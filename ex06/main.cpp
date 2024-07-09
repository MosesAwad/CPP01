
#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	Harl;
	if (argc != 2)
	{
		std::cerr << "Error: Please enter strictly 2 arguments." << std::endl;
		return (1);
	}
	Harl.complain(argv[1]);
	return (0);
}
