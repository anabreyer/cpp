#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array<T>&		operator = (const Array& copy);
		T&				operator[](int);
		unsigned int	size(void) const;
		unsigned int	len;
	private:
		T				*arr;
};

#include "Array.tpp"
#endif
