
namespace ft {

	/***************************/
	/* Consructor & destructor */
	/***************************/
	// default
	template<class T, class A>
	ft::vector<T, A>::vector( const allocator_type& alloc):
		_allocator(alloc), _size(0) { }

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

	/*************************************/
	/* Capacity related member functions */
	/*************************************/
	template<class T, class A>
	typename ft::vector<T, A>::size_type ft::vector<T, A>::max_size(void) const
	{
		return ( this->_allocator.max_size() );
	}

	template<class T, class A>
	typename ft::vector<T, A>::size_type ft::vector<T, A>::size(void) const
	{
		return ( this->_allocator.max_size() );
	}

	template<class T, class A>
	void ft::vector<T, A>::reserve(size_type n) 
	{
		(void)n;
	}

	template<class T, class A>
	typename ft::vector<T, A>::size_type ft::vector<T, A>::capacity(void) const
	{
		return ( 5 );
	};

} // namespace ft
