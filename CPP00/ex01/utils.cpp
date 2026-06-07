#include "Contact.hpp"

void	check_numeric(bool *isNumeric, std::string tmp)
{
	for (int i = 0; tmp[i]; i++)
	{
		if (!std::isdigit(tmp[i]))
		{
			*isNumeric = false;
			break ;
		}	
	}
}

void	check_alpha(bool *isAlpha, std::string tmp)
{
	for (int i = 0; tmp[i]; i++)
	{
		if (!std::isalpha(tmp[i]))
		{
			*isAlpha = false;
			break ;
		}	
	}
}

int	is_space(std::string input)
{
	for (int i = 0; input[i]; i++)
	{
		if (!isspace(input[i]))
			return (0);
	}
	return (1);
}
