#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>
#include <ctime>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <limits>
#include "sort_utils.hpp"

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class PmergeMe
{
	public:
		PmergeMe(char** av, int ac);
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe&	operator = (const PmergeMe& copy);

		std::vector<int>	vectorSort();
		std::deque<int>		dequeSort();

		std::vector<int>	getVector() const;
		std::deque<int>		getDeque() const;

	private:
		std::deque<int>		_deque;
		std::vector<int>	_vector;

		void				proccessInput(char** av, int ac);
};

#endif