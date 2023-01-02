#include "../incs/vector.hpp"

#include <vector>
#include <iostream>

void	test_vector() {
	std::cout << BYEL "\n\n~~~~~~~~~~~~~~~~ VECTOR ~~~~~~~~~~~~~~~~\n" RESET;
	{
		std::cout << BBLU "\nTHIS IS THE STD LIBRARY!\n" RESET;

		std::vector<int> theVec;
		theVec.reserve(1);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";

		std::vector<int>::allocator_type::pointer	r = NULL;
		std::cout << r;
		std::cout << "\n";
	}
	{
		using namespace ft;

		std::cout << BCYN "\nTHIS IS MY FT_CONTAINERS!\n" RESET;

		vector<int> theVec;
		theVec.reserve(1);
		std::cout << theVec.capacity();
		/*
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";
		theVec.push_back(11);
		std::cout << theVec.capacity();
		std::cout << "\n";

		vector<int>::allocator_type::pointer	r;
		std::cout << r;
		*/
	}
}
