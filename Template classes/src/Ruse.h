/*
 * Ruse.h
 *
 *  Created on: 22 Dec 2019
 *      Author: adam
 */

#ifndef RUSE_H_
#define RUSE_H_

template<class T>
class Ruse{
private:
	T m_val1;
	T m_val2;

public:

	Ruse(T val1, T val2){
		this->m_val1 = val1;
		this->m_val2 = val2;
	}

	T sum(){
		T val3 = m_val1 + m_val2;

		return val3;
	}

	T addMore();

};


template<typename T>
T Ruse<T>::addMore(){
	return m_val1 + m_val2 + 30;

}






#endif /* RUSE_H_ */
