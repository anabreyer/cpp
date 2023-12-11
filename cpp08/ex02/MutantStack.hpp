#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator			begin();
		iterator			end();
		reverse_iterator	rbegin();
		reverse_iterator	rend();
};

template <typename T>
typename std::stack<T>::container_type::iterator			MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator			MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}

#endif
