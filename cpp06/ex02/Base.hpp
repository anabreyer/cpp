#ifndef BASE_HPP
# define BASE_HPP
#include <limits>
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdint.h>

class Base
{
	public:
		virtual	~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif