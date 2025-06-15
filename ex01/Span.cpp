#include "Span.hpp"

Span::Span() {
	_max_n_integres = 0;
	std::cout << "Default Span Created." << std::endl;
}

Span::Span(const Span&) {}

Span& Span::operator=(const Span&) { return *this; }

Span::~Span() {}

Span::Span(unsigned int n) {
	_max_n_integres = n;
	std::cout << "Span Created With " << n << "as Maximum of Integers." << std::endl;
}

void	Span::addNumber(int number){
	if (_data.size() >=  _max_n_integres)
		throw std::runtime_error("Span it's already full");
	_data.push_back(number);
	std::cout << "Number " << number << " added to stack" << std::endl;
}

int	Span::shortestSpan() {
	if (_data.size() < 2)
		throw std::runtime_error("Span has not enough elements to shortestSpan");

	std::vector<int> sorted = _data; // Sorting all the vector in ascending order
	std::sort(sorted.begin(), sorted.end());

	int shortest_span =  std::numeric_limits<int>::max(); //Max number of c++
	for (size_t i = 1; i < sorted.size(); i++) {
		int tmp_span = sorted[i] - sorted[i - 1];
		if (tmp_span < shortest_span)
			shortest_span = tmp_span;
	}
	return (shortest_span);
}

int	Span::longestSpan() {
	if (_data.size() < 2)
		throw std::runtime_error("Span has not enough elements to longestSpan");

	int	minVal = *std::min_element(_data.begin(), _data.end());
	int	maxVal = *std::max_element(_data.begin(), _data.end());

	return (maxVal - minVal);
}

