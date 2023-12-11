#include "easyfind.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <map>
#include <list>
#include <deque>

# define N 5

int	main(int ac, char **av) 
{
	int tofind = 1;

	if (ac == 2)
		tofind = atoi(av[1]);

	int	arr[N] = {0, 3, 1, 2, 5};

	std::cout << "array: ";
	for (size_t i = 0; i < N; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::vector<int> vec(arr, arr + N);
	std::list<int> lst(arr, arr + N);
	std::deque<int> deq(arr, arr + N);

	::easyfind(vec, tofind);
	::easyfind(lst, tofind);
	::easyfind(deq, tofind);

	return 0;
}
