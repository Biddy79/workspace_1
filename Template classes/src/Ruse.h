/*
 * Ruse.h
 *
 *  Created on: 22 Dec 2019
 *      Author: adam
 */

#ifndef RUSE_H_
#define RUSE_H_

#include <iostream>

template<class T>
class Ruse {
private:

	T m_val1;
	T m_val2;

public:

	T add(T m_val1, T m_val2) {
		T total;
		total = m_val1 + m_val2;

		std::cout << total << std::endl;

		return total;
	}



};

#endif /* RUSE_H_ */
