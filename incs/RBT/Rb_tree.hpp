#ifndef	__RB_TREE__
# define __RB_TREE__

# include "Rb_tree_node.hpp"

template <typename T, typename Compare, typename Alloc>
class Rb_tree {
	/*
	 * Member types
	 */

	reference	allocator_type::reference	for the default allocator: value_type&
	const_reference	allocator_type::const_reference	for the default allocator: const value_type&
	pointer	allocator_type::pointer	for the default allocator: value_type*
	const_pointer	allocator_type::const_pointer	for the default allocator: const value_type*
	iterator	a bidirectional iterator to value_type	convertible to const_iterator
	const_iterator	a bidirectional iterator to const value_type
	reverse_iterator	reverse_iterator<iterator>
	const_reverse_iterator	reverse_iterator<const_iterator>
	difference_type	a signed integral type, identical to: iterator_traits<iterator>::difference_type	usually the same as ptrdiff_t
	//map
	key_type	The first template parameter (Key)	
	mapped_type	The second template parameter (T)	
	value_type	pair<const key_type,mapped_type>	
	key_compare	The third template parameter (Compare)	defaults to: less<key_type>
	value_compare	Nested function class to compare elements	see value_comp
	allocator_type	The fourth template parameter (Alloc)	defaults to: allocator<value_type>
	reference	allocator_type::reference	for the default allocator: value_type&
	const_reference	allocator_type::const_reference	for the default allocator: const value_type&
	pointer	allocator_type::pointer	for the default allocator: value_type*
	const_pointer	allocator_type::const_pointer	for the default allocator: const value_type*
	iterator	a bidirectional iterator to value_type	convertible to const_iterator
	const_iterator	a bidirectional iterator to const value_type	
	reverse_iterator	reverse_iterator<iterator>	
	const_reverse_iterator	reverse_iterator<const_iterator>	
	difference_type	a signed integral type, identical to: iterator_traits<iterator>::difference_type	usually the same as ptrdiff_t
	size_type	an unsigned integral type that can represent any non-negative value of difference_type

	//set
	v key_type	The first template parameter (T)
	v value_type	The first template parameter (T)
	v key_compare	The second template parameter (Compare)	defaults to: less<key_type>
	v value_compare	The second template parameter (Compare)	defaults to: less<value_type>
	v allocator_type	The third template parameter (Alloc)	defaults to: allocator<value_type>
	v reference	allocator_type::reference	for the default allocator: value_type&
	v const_reference	allocator_type::const_reference	for the default allocator: const value_type&
	v pointer	allocator_type::pointer	for the default allocator: value_type*
	v const_pointer	allocator_type::const_pointer	for the default allocator: const value_type*
	v iterator	a bidirectional iterator to value_type	convertible to const_iterator
	v const_iterator	a bidirectional iterator to const value_type
	v reverse_iterator	reverse_iterator<iterator>
	const_reverse_iterator	reverse_iterator<const_iterator>
	difference_type	a signed integral type, identical to: iterator_traits<iterator>::difference_type	usually the same as ptrdiff_t
	size_type	an unsigned integral type that can represent any non-negative value of difference_type

	public:
		typedef T			data_type;
		typedef Compare		key_compare;
		typedef Alloc		allocator_type;
		typedef size_t		size_type


		typedef _Val value_type;
		typedef value_type* pointer;
		typedef const value_type* const_pointer;
		typedef value_type& reference;
		typedef const value_type& const_reference;
		typedef _Rb_tree_node* _Link_type;
		typedef const _Rb_tree_node* _Const_Link_type;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;
		typedef _Alloc allocator_type;

	// capacity
	public:
		size_type	max_size() const {}
		bool		empty() const {}
		size_type	size() const {}

	// accessor/iterators
	template <typename T>
	Rb_tree_node find_node_by_key(T key) {}

	// modifiers
	public:
		void	insert(Rb_tree_node &node) {

		}

		void	remove(Rb_tree_node &node) {
		}

	// balancing
	private:
		bool	has_violation(Rb_tree_node &node) {
			if (has_violation(node) && node != NULL) {
			}
		}

		void	re_balance(void) {
		}

		void	rotate_left(Rb_tree_node &node) {}
		void	rotate_right(Rb_tree_node &node) {}



	
};

# endif // __RB_TREE__
