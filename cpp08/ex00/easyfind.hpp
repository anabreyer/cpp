#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <cstddef>
#include <iostream>
#include <algorithm>


template <typename T> void easyfind(T container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number);
	if (it != container.end())
	{		
		std::cout << "Integer \'" << number \
				  << "\' was found in the container at index: " \
				  << std::distance(container.begin(), it) << std::endl;
	}
	else
		std::cout << "Integer \'" << number << "\' was not found in the container" << std::endl;
}

#endif