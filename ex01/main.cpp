#include "Span.hpp"

#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
	try {
		// Criar um Span com capacidade para 10.000 inteiros
		Span sp(10000);

		// Criar um vector com 10.000 elementos
		std::vector<int> numeros;
		for (int i = 0; i < 10000; ++i)
			numeros.push_back(i);

		// Adicionar todos os números de uma vez ao Span
		sp.addRange(numeros.begin(), numeros.end());

		// Mostrar o menor e maior span
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Erro: " << e.what() << std::endl;
	}

	return 0;
}
