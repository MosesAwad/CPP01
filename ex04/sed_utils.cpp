
#include "sed.hpp"

std::string	set_up_outfile_name(std::string ogfile_name)
{
	std::string name_buffer;
	size_t i;

	i = 0;
	while (i < ogfile_name.size())
	{
		if (ogfile_name[i] == '.')
			break ;
		i++;
	}

	if (i != (ogfile_name.size()))
		name_buffer = ogfile_name.substr(0, i);
	else
		name_buffer = ogfile_name;
	name_buffer += ".replace";

	return (name_buffer);
}

void	ft_replace(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2)
{
	// Loop to replace line
	std::string	buffer;
	size_t		pos;
	size_t		i;

	pos = 0;
	while (std::getline(infile, buffer))
	{
		std::string	replace;

		i = 0;
		// if s1 is an empty string, then pos = buffer.find(s1, i)
		// would return the 0 to pos, even if buffer not an empty
		// string because .find() will consider the empty string a
		// match because an empty string is considered to be found
		// at every position in the string. So the way we handle it
		// is user sets s1 to an empty string, then just copy all
		// the contents of file.txt to file.replace
		if (s1 != "")
		{
			// Note 1: maximum value for size_t which is equivalent to
			// -1, which is what gets returned when no matched
			// is found.
			// Note 2: the main trick is to set i = pos + s1.size()
			// and not i += pos + s1.size(). That is because pos is
			// always given in terms of the original string buffer.
			// So if we do i += pos + s1.size() we would get out of
			// bounds because i is iterating from the beginning of
			// the original string too. Pos does not start from i 
			// like how we did it in C (i = i + j) where we reset
			// j everytime. No, it's different here.
			// So, think of it this way -> the main iterator is
			// actually pos. i is just the placeholder for
			// pos's old position when we update pos at every round.
			while ((pos = buffer.find(s1, i)) != std::string::npos)		// i is the position where .find() should start the search from and pos is the index of the first occurence of s1 in buffer
			{
				replace.append(buffer, i, pos - i);	 // i is the POSITION of the first character in buffer copied into replace and pos - i is the LENGTH of the portion in buffer to be copied into replace
				replace.append(s2);
				i = pos + s1.size(); 
			}
			replace.append(buffer, i);	// i is the position of the first character in buffer copied into replace
		}
		else
			replace = buffer;

		// the line below must be s1.size() because
		// if s2 was shorter than s1, then s2 would only
		// be partially replaced.
		// std::cout << "FREE: " << replace << std::endl;
		// std::cout << "i and pos are " << i << " and " << s1.size() << std::endl;

		if (i == 0)
			replace = buffer;
		outfile << replace << std::endl;
	}
}
