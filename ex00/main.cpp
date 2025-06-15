#include "easyfind.hpp"

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	try {
		auto it = easyfind(v, 3);
		std::cout << "Found: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		auto it = easyfind(v, 10);
		std::cout << "Found: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}