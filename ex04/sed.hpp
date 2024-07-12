
#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

std::string	set_up_outfile_name(std::string ogfile_name);
void	ft_replace(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2);

#endif