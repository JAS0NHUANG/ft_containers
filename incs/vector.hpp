#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <memory>

namespace ft {

template< class T, class Allocator = std::allocator<T> >
class vector {
public:
/****************/
/* Member types */
/****************/
	// basics
	typedef				T										value_type;
	typedef				Allocator								allocator_type;
	typedef				std::size_t								size_type;

	// allocators
	typedef	typename	allocator_type::reference				reference;
	typedef	typename	allocator_type::const_reference			const_reference;
	typedef	typename	allocator_type::pointer					pointer;
	typedef	typename	allocator_type::const_pointer			const_pointer;

	// iterators
	typedef				pointer									iterator;
	typedef				const_pointer							const_iterator;
	typedef	typename	std::reverse_iterator<value_type>		reverse_iterator;
	typedef	typename	std::reverse_iterator<const value_type>	const_reverse_iterator;

/***************************/
/* Consructor & destructor */
/***************************/
	// default
	explicit vector(const allocator_type& alloc = allocator_type());

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
	~vector(void);

/** Capacity related member functions
 *
 * @brief	max_size	return the max_size given by allocator
 * @brief	reserve		reserve a certain memory spaces
 * @brief	capacity	reserve a certain memory spaces
 *
 */

	size_type	max_size(void) const {
		return ( this->_allocator.max_size() );
	};
	size_type	size(void) const {
		return ( this->_allocator.max_size() );
	};
	void		reserve(size_type n) {
		(void)n;

	};

	size_type	capacity(void) const {
		return ( 5 );
	};


private:
	allocator_type	_allocator;
	size_type		_size;

}; // template class vector

} // namespace ft

# include "./vector.tpp"

#endif
