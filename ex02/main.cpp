#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
	std::cout << "🟢 Testing MutantStack:\n";
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "\n🟢 Iterating with normal iterator:\n";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	for (; it != ite; ++it)
		std::cout << *it << std::endl;

	std::cout << "\n🔁 Iterating in reverse:\n";
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
		std::cout << *rit << std::endl;

	std::cout << "\n📋 Copy to std::stack:\n";
	std::stack<int> s(mstack);
	while (!s.empty()) {
		std::cout << s.top() << std::endl;
		s.pop();
	}

	return 0;
}
