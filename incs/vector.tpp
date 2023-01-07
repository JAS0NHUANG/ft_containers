/**
 * Consructor
 */

namespace ft {
// default
template<class T, class A>
ft::vector<T, A>::vector( const allocator_type& alloc):
	_allocator(alloc), _size(0)
	{ }
/*
// fill
explicit vector(size_type n, const value_type& val = value_type(),
	const allocator_type& alloc = allocator_type());

// range
template <class InputIterator>
vector (InputIterator first, InputIterator last, \
	const allocator_type& alloc = allocator_type());

// copy
vector (const vector& x);
*/

//destructor
template<class T, class A>
ft::vector<T, A>::~vector(void)
{ }

} // namespace ft
