# Standard library header `<utility>`
[cppreference.com - header - utility](https://en.cppreference.com/w/cpp/header/utility)

## Classes:
### `std::pair`
- a "class template"
- store two heterogeneous objects.

#### Template parameters
	T1, T2	-	the types of the elements that the pair stores.

#### Member types
Member type	| Definition
---			| ---
first_type	| T1
second_type	| T2

#### Member objects
Member name	| Type
---			| ---
first		| T1
second		| T2

#### Member functions
(constructor)	constructs new pair(public member function)
operator=		assigns the contents(public member function)

#### Non-member functions
make_pair	creates a pair object of type, defined by the argument types
			(function template)
operator==
operator!=	(removed in C++20)
operator<	(removed in C++20)
operator<=	(removed in C++20)
operator>	(removed in C++20)
operator>=	(removed in C++20)

lexicographically compares the values in the pair
(function template)


## Functions:
### `std::make_pair`
- non-member function of std::pair
- Creates a std::pair object

#### Parameters
t, u	the values

#### Return value
std::pair object


