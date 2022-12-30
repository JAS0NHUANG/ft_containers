#ifndef _PAIR_HPP_
# define _PAIR_HPP_

namespace ft {

	// the pair template
	template<class T1, class T2>
		struct pair {
			// two bound types
			typedef T1	first_type;
			typedef T2	second_type;

			// two copies of objects
			T1			first;
			T2			second;

			// default constructor
			pair(void): first(), second() {}

			// constructors
			pair(const T1 &X, const T2 &Y) : first(X), second(Y) { }
			pair(pair const &p) : first(p.first), second(p.second) { }
		};

	template<class T1, class T2>
		pair<T1, T2> make_pair(T1 X, T2 Y) {
			return (pair<T1, T2>(X, Y));
		}

}

#endif //_PAIR_HPP_
