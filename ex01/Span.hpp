#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>
#include <iostream>

class Span {
	private:
		unsigned int		_max_n_integres;
		std::vector<int>	_data;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span&operator=(const Span& other);
		~Span();

		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

		template<typename InputIt>
		void addRange(InputIt begin, InputIt end);
};

template <typename InputIt>
void	Span::addRange(InputIt begin, InputIt end) {
	for (InputIt it = begin; it != end; ++it) {
		if (_data.size() >= _max_n_integres)
			throw std::runtime_error("Span is full");
		_data.push_back(*it);
	}
}

#endif
