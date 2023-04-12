#ifndef __RB_TREE_NODE__
# define __RB_TREE_NODE__

/*
 *  Red-black tree implementation.
 *	reference: stl_tree.h
 *  (https://gcc.gnu.org/onlinedocs/gcc-4.8.2/libstdc++/api/a01568_source.html)
 */
# include <cstddef>
# include <iostream>

enum Rb_tree_node_color {
	red = false,
	black = true
};

template <typename T>
class Rb_tree_node {
	public:
	/*
	 * Typedefs
	 */
	typedef	T	data_type;

	/*
	 *	Member attributes
	 */
	private:
		data_type				data;
		Rb_tree_node_color		color;
		Rb_tree_node<data_type>	*parent;
		Rb_tree_node<data_type>	*left;
		Rb_tree_node<data_type>	*right;

	/*
	 *	Member functions
	 */
	public:
	// constructors
		Rb_tree_node(void) : 
			data(NULL), color(red), parent(NULL), left(NULL), right(NULL) {}

		Rb_tree_node(T& data) :
			data(data), color(red), parent(NULL), left(NULL), right(NULL) {}
		
	// getters
		data_type	get_data(void){
			return this->data;
		}

		Rb_tree_node_color	get_color(void){
			return this->color;
		}

		Rb_tree_node*	get_parent(void){
			return this->parent;
		}

	// setters
		void	set_parent(Rb_tree_node *parent) {
			this->parent = parent;
		}

		void	set_left(Rb_tree_node *left) {
			this->left = left;
		}

		void	set_right(Rb_tree_node *right) {
			this->right = right;
		}

		void	set_color(Rb_tree_node_color color) {
			this->color = color;
		}
};
#endif //__RB_TREE_NODE__
