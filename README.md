ft_containers
=================================================================================

Not docker containers, not shipping containers...

C++ containers ^_^

Read some FXXXXX manuals
---------------------------------------------------------------------------------
cppreference.com
cplusplus.com
[source code](https://gcc.gnu.org/onlinedocs/libstdc++/libstdc++-html-USERS-4.3/dir_ebf49eb3e0a16d88a5bbb918d2e540b4.html)
https://www.geeksforgeeks.org/the-c-standard-template-library-stl/


Containers
---------------------------------------------------------------------------------

### Vigorous `vector`
- type: sequence container
[cppreference.com - std::vector](https://en.cppreference.com/w/cpp/container/vector)

#### check list:

- Member functions:
	1. `capacity()`
	2. `size()`

- Template parameters
	1. T: the type of the elements
	2. Allocator


### Miraculous `map`
- type: associative container

keys are unique!

### Spacious `stack`
- type: container adaptor

Iterator
---------------------------------------------------------------------------------
Ranged base for loop (C++ 11)
(syntaxe sugar for iterators??)

vector has an indexing system, so iterator is not mandatory.
But for containers like "map" we can only "iterate" through the elements via iterator.


Metaprogramming library
---------------------------------------------------------------------------------
https://en.wikipedia.org/wiki/Template_metaprogramming

https://www.youtube.com/watch?v=eVtLOHoDbTo

https://www.geeksforgeeks.org/template-metaprogramming-in-c/


type traits:
	- `enable_if`  
		[cppreference std::enable_if](https://en.cppreference.com/w/cpp/types/enable_if)  

	- `is_integral`  


Algorithm
---------------------------------------------------------------------------------

- `equal`
- `lexicographical_compare`


Utility
---------------------------------------------------------------------------------
- `std::pair`  
- `std::make_pair`  

<details>
<summary>Check List</summary>
	
- [ ] pair()  
- [ ] pair( const T1 &X, const T2 &Y)  
- [ ] template< class U1, class U2> pair( const pair<U1, U2> & p)  
- [ ] pair(const pair& p) = default  
	
</details>


Some other notions
--------------------------------------------------------------------------------- 

### Template specialization
Get a special behavior for a particular data type.
https://www.geeksforgeeks.org/template-specialization-c/

### Allocator
[One reason to Modify your Memory Allocator (C/C++)](https://www.youtube.com/watch?v=RoVD6zlftF0)
