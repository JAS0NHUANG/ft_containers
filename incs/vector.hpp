#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <memory>

namespace ft {

template< class T, class Allocator = std::allocator<T> >
class vector {
public:
/************************/
/* Member types         */
/* @brief some typedefs */
/************************/
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

/***************************************************************/
/* Capacity related member functions                           */
/* @brief	size		return the current vector size         */
/* @brief	max_size	return the max size given by allocator */
/* @brief	size		change the vector size                 */
/* @brief	capacity	return size of allocated capacity      */
/* @brief	empty       check whether vector is empty          */
/* @brief	reserve		reserve a certain memory spaces        */
/***************************************************************/
	size_type	size(void) const;
	size_type	max_size(void) const;
	void		resize(size_type n, value_type val = value_type());
	size_type	capacity(void) const;
	bool		empty(void) const;
	void		reserve(size_type n);

private:
	allocator_type	_allocator;
	size_type		_size;

}; // template class vector

} // namespace ft

# include "./vector.tpp"

#endif
