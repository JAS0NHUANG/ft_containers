#include "Rb_tree_node.hpp"
#include "Rb_tree_debug.hpp"
#include <utility>
#include <iostream>


int main(void) {
	/* initiate a pair */
	std::pair<int, int> the_pair(1,1);
	/* put the pair into RBT node */
	Rb_tree_node<std::pair<int, int> > this_is_the_node(the_pair);
	/* print out the RBT node content */
	print_node_info(this_is_the_node);

	/* create another node */
	std::pair<int, int> the_other_pair(1,9);
	Rb_tree_node<std::pair<int, int> > this_is_the_second_node(the_other_pair);
	this_is_the_second_node.set_parent(&this_is_the_node);
	/* print out the RBT node content */
	print_node_info(this_is_the_second_node);

	return 0;
}
