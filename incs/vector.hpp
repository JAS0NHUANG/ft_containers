#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <memory>

namespace ft {

	template<
		class T, class Allocator = std::allocator<T>
	> class vector {
		public:
			/***********************************************************************/
			// member types
			/***********************************************************************/
			// basics
			typedef				T										value_type;
			typedef				Allocator								allocator_type;

			// allocators
			typedef	typename	allocator_type::reference				reference;
			typedef	typename	allocator_type::const_reference			const_reference;
			typedef	typename	allocator_type::pointer					pointer;
			typedef	typename	allocator_type::const_pointer			const_pointer;

			// iterators
			typedef				pointer									iterator;
			typedef				const_pointer							const_iterator;

/*
			typedef	typename	std::reverse_iterator<value_type>		reverse_iterator;
			typedef	typename	std::reverse_iterator<const value_type>	const_reverse_iterator;
			*/

		private:
			

	};



}

#endif
