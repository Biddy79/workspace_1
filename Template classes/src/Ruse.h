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
	//tempalte obj variabel
	T obj;

public:
	//Ruse constructor takes tamplate type and then sets the object passed in equeal to templte T
	//
	Ruse(T obj){
		this->obj = obj;
	}

	//getObj returns a template type T
	T getObj(){
		return obj;
	}
};




#endif /* RUSE_H_ */
