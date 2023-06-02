#include "Harl.hpp"

int	harl_convert(char *av)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == av)
			return (i);
	return (-1);
}

void	harl_switch(char *av, Harl &h)
{
	switch (harl_convert(av))
	{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int ac, char **av)
{
    Harl h;

    if (ac != 2)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		harl_switch(av[1], h);
	return (0);
}