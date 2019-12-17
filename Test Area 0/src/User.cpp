/*
 * User.cpp
 *
 *  Created on: 7 Dec 2019
 *      Author: adam
 */
#include "User.h"
#include <iostream>


User::User():pValue(new int [SIZE]{0}){

}

User::~User() {
	std::cout << "Destructor" << std::endl;
}


const User& User::operator=(const User& rhs){

	// CAN ONLY DO THIS WITH sheared_ptr !!!!!!!!!!!!!! NOT unique_ptr
	this->pValue = rhs.pValue;

	return *this;
}



void User::calculate(){

	int num = 1;
	for(int i=0; i<SIZE; i++){
		 pValue[i] = num++;
		 std::cout << pValue[i] << ", " << std::flush;

	}

}

