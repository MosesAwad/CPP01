

#include "sed.hpp"

int main(int argc, char *argv[])
{
	// Parsing arguments
	if (argc != 4)
	{
		std::cerr << "Error: Must run with 4 arguments" << std::endl;
		
		return (1);
	}

	// Redeclaring all C strings as part of the C++ string class
	std::string	ogfile_name = argv[1];
	std::string	s1 = argv[2];
	std::string s2 = argv[3];

	// Handle empty string


	// Infile Handlling
	std::ifstream infile(ogfile_name.c_str());
	if (infile.is_open() == false)
	{
		std::cerr << "Error: Could not open file" << std::endl;
		return (2);
	}

	// Outfile Handling
	std::string outfile_name = set_up_outfile_name(ogfile_name);
	std::ofstream outfile(outfile_name.c_str());

	ft_replace(infile, outfile, s1, s2);

	infile.close();
	outfile.close();
}
