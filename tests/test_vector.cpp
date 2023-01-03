#include "../incs/vector.hpp"

#include <vector>
#include <iostream>

void	test_vector() {
	std::cout << BYEL "\n\n~~~~~~~~~~~~~~~~ VECTOR ~~~~~~~~~~~~~~~~\n" RESET;
	{
		std::cout << BBLU "\nTHIS IS THE STD LIBRARY!\n" RESET;

		std::vector<int> theVec;
		theVec.reserve(1);
		theVec.reserve(1);
		std::cout << "std vec capacity: " << theVec.capacity() << "\n";
		std::cout << "std vec max size: " <<  theVec.max_size() << "\n";
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
		std::cout << BCYN "\nTHIS IS MY FT_CONTAINERS!\n" RESET;

		ft::vector<int> theVec;
		theVec.reserve(1);
		std::cout << "ft vec capacity: " << theVec.capacity() << "\n";
		std::cout << "ft vec max size: " <<  theVec.max_size() << "\n";
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
