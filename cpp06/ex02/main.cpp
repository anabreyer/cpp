#include "Base.hpp"

Base*	generate(void)
{
	std::srand((unsigned) time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return (new(A));
		case 1:
			return (new(B));
		case 2:
			return (new(C));
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "Not Recognized\n";
}

void	identify_recursive(Base& p, int which)
{
	try
	{
		switch(which)
		{
			case 0:
				(void)dynamic_cast<A&>(p);
				std::cout << "A\n";
				break ;
			case 1:
				(void)dynamic_cast<B&>(p);
				std::cout << "B\n";
				break ;
			case 2:
				(void)dynamic_cast<C&>(p);
				std::cout << "C\n";
				break ;
			default:
				std::cout << "Not Recognized\n";
		}
	}
	catch(const std::exception& e)
	{
		identify_recursive(p, which + 1);
	}
}

void	identify(Base& p)
{
	identify_recursive(p, 0);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	{
		Base*	base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return (0);
}