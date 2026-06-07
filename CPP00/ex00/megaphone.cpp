#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string result = argv[i];
			for (int j = 0; j < (int)result.size(); j++)
			{
				std::cout << (char)std::toupper(result[j]);
			}
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
