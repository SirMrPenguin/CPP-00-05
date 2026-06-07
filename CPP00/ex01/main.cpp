#include "PhoneBook.hpp"

int	main(void)
{	
	PhoneBook	book;
	std::string	input;

	std::cout << "Welcome my friend, you can use [ADD], [SEARCH] and [EXIT]:"<< std::endl;
	while (true)
	{
		if (!std::getline(std::cin, input))
		{
			std::cout << "You have pressed ^D. Exiting..." << std::endl;
			break ;
		}
		if (input.compare("ADD") == 0)
			book.set_informations();
		else if (input.compare("SEARCH") == 0)
			book.get_informations();
		else if (input.compare("EXIT") == 0)
		{	
			std::cout << "Thanks for all, goodbye!"<< std::endl;
			break ;
		}
		else
			std::cout << RED "Please enter only [ADD], [SEARCH] or [EXIT]" END << std::endl;
	}
	return (0);
}
