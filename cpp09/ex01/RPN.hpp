#ifndef RPN_HPP
# define RPN_HPP
#include <stack>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <algorithm>
#include <ctime>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

class RPN
{
	public:
		RPN(std::string input);
		~RPN();
		RPN(const RPN& copy);
		RPN&	operator = (const RPN& copy);

		int	calculate();

		std::stack<long long>	getStack() const;
		std::string		getInput() const;

	private:
		std::stack<long long>	_stack;
		std::string		_input;
		std::string		removeWhite(std::string str) const;
};

#endif