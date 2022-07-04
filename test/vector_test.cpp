#include <vector>
#include <iostream>

void	vector_test() {
	{
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


	std::vector<int>::allocator_type::pointer	r;
	std::cout << r;
	}
}
