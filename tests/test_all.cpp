#include "./colorcodes.hpp"
#include "./test_vector.cpp"
#include "./test_pair.cpp"
#include "./test_map.cpp"

#include <iostream>

int main() {
	test_vector();
	test_pair();
	std::cout << "map: ";
	test_map();
}
