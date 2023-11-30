#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <cstdlib>

template<typename T> void iter(T* arr, unsigned long size, void (*func)(T&))
{
	if (!arr)
	{
		std::cerr << "invalid array pointer!\n";
		return ;
	}
	for (unsigned long i = 0; i < size; i++)
		func(arr[i]);
}

template<typename T> void iter(T* arr, unsigned long size, void (*func)(const T&))
{
	if (!arr)
	{
		std::cerr << "invalid array pointer!\n";
		return ;
	}
	for (unsigned long i = 0; i < size; i++)
		func(arr[i]);
}

#endif