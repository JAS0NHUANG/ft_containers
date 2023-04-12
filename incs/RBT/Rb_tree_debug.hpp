#include "Rb_tree_node.hpp"
#include <iostream>

template <typename T>
void	print_node_info(Rb_tree_node<T> &node) {
	std::cout << "\n~~~~~NODE CONTENT~~~~~\n";
	std::cout << "node color:";
	node.get_color() ? (std::cout << " BLACK\n") : (std::cout << " RED\n");

	std::cout << "node data:";
	std::cout << node.get_data().first;
	std::cout << "\n";

	std::cout << "node parent:";
	std::cout << node.get_parent();
	std::cout << "\n";

	std::cout << "node addr:";
	std::cout << &node;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~\n";
}
