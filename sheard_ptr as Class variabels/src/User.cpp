/*
 * User.cpp
 *
 *  Created on: 7 Dec 2019
 *      Author: adam
 */
#include "User.h"
#include <iostream>


User::User(int size):m_size(size), pValue(new int [m_size]{0}) {

}

User::~User() {
	std::cout << "Destructor" << std::endl;
}

User::User(const User& other){
	m_size = other.m_size;
	pValue = other.pValue;
}

const User& User::operator=(const User& rhs){

	// CAN ONLY DO THIS WITH sheared_ptr !!!!!!!!!!!!!! NOT unique_ptr
	this->pValue = rhs.pValue;

	return *this;
}



void User::calculate(){

	int num = 1;
	for(int i=0; i<m_size; i++){
		 pValue[i] = num++;
		 std::cout << pValue[i] << ", " << std::flush;

	}
}

