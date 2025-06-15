#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include <vector>
#include <list>
#include <deque>
#include <stdexcept>
#include <iostream>


template <typename T>
typename T::iterator easyfind(T& container, int num)
{
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();
	while (it != ite)
	{
		if (*it == num)
			return it;
		it++;
	}
	throw std::runtime_error("Integer not found");
}

#endif
