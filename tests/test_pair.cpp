#include "../incs/pair.hpp"

#include <utility>
#include <iostream>

void	test_pair() {
	std::cout << BYEL "\n\n~~~~~~~~~~~~~~~~ PAIR ~~~~~~~~~~~~~~~~\n" RESET;

	std::cout << BBLU "\nTHIS IS THE STD LIBRARY!\n" RESET;

	std::cout << BLU "Default constructor:\n" RESET;
	std::pair<int, std::string> stdPair(42, "Hello std pair");
	std::cout << stdPair.first << "\n";
	std::cout << stdPair.second << "\n";

	std::cout << BLU "Copy constructor:\n" RESET;
	std::pair<int, std::string>  stdNewPair(stdPair);
	std::cout << stdNewPair.first << "\n";
	std::cout << stdNewPair.second << "\n";

	std::cout << BLU "make_pair:\n" RESET;
	std::pair<int, std::string> stdMakePair = std::make_pair(42, "Hello make pair!");
	std::cout << stdMakePair.first << "\n";
	std::cout << stdMakePair.second << "\n";

	//---------------------------------------------------------------------------

	std::cout << BCYN "\nTHIS IS MY FT_CONTAINERS!\n" RESET;

	std::cout << CYN "Default constructor:\n" RESET;
	ft::pair<int, std::string> ftPair(42, "Hello ft pair");
	std::cout << ftPair.first << "\n";
	std::cout << ftPair.second << "\n";

	std::cout << CYN "Copy constructor:\n" RESET;
	ft::pair<int, std::string>  ftNewPair(ftPair);
	std::cout << ftNewPair.first << "\n";
	std::cout << ftNewPair.second << "\n";

	std::string hello = "Hello make pair!";
	std::cout << CYN "make_pair:\n" RESET;
	ft::pair<int, std::string> ftMakePair = ft::make_pair(42, hello);
	std::cout << ftMakePair.first << "\n";
	std::cout << ftMakePair.second << "\n";
}
