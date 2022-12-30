#include <map>
#include <iostream>

void	test_map() {

	std::cout << BYEL "\n\n~~~~~~~~~~~~~~~~ MAP ~~~~~~~~~~~~~~~~\n" RESET;

	std::cout << BBLU "\nTHIS IS THE STD LIBRARY!\n" RESET;

	std::map<int, int> stdMap;
	stdMap.insert(std::pair<int, int>(0, 0));
	std::cout << "map size: " << stdMap.size() << "\n";
	for (int i = 1; i < 100000; i++ ){
		stdMap.insert(std::pair<int, int>(i, 1));
		stdMap.insert(std::pair<int, int>(i, 1));
	}

	std::cout << BCYN "\nTHIS IS MY FT_CONTAINERS!\n" RESET;

	std::cout << "map size: " << stdMap.size() << "\n";

}
