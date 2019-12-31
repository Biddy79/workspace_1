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
	T m_obj;

	T m_val1;
	T m_val2;

public:
	//constructor implamentation found in Templte classs.cpp
	Ruse();
	//constructor implamentation found in Templte classs.cpp
	Ruse(T obj);
	//function implamentation found in Templte classs.cpp
	void print();

	//declearing function body here notice diffrence from above
	T add(T m_val1, T m_val2) {
		T total;
		total = m_val1 + m_val2;

		std::cout << total << std::endl;

		return total;
	}

};

#endif /* RUSE_H_ */
