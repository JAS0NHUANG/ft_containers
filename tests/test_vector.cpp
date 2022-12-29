#include "../incs/vector.hpp"

#include <vector>
#include <iostream>

void	vector_test() {
	std::cout << BYEL "\n\n~~~~~~~~~~~~~~~~ VECTOR ~~~~~~~~~~~~~~~~\n" RESET;
	{
		using namespace std;

		cout << BBLU "\nTHIS IS THE STD LIBRARY!\n" RESET;

		vector<int> theVec;
		theVec.reserve(1);
		cout << theVec.capacity();
		cout << "\n";
		theVec.push_back(11);
		cout << theVec.capacity();
		cout << "\n";
		theVec.push_back(11);
		cout << theVec.capacity();
		cout << "\n";
		theVec.push_back(11);
		cout << theVec.capacity();
		cout << "\n";
		theVec.push_back(11);
		cout << theVec.capacity();
		cout << "\n";
		theVec.push_back(11);
		cout << theVec.capacity();
		cout << "\n";

		vector<int>::allocator_type::pointer	r;
		cout << r;
		cout << "\n";
	}
	{
		using namespace ft;

		std::cout << BCYN "\nTHIS IS MY FT_CONTAINERS!\n" RESET;

		/*
		vector<int> theVec;
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

		vector<int>::allocator_type::pointer	r;
		std::cout << r;
		*/
	}
}
