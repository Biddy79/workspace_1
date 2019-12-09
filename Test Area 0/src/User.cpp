/*
 * User.cpp
 *
 *  Created on: 7 Dec 2019
 *      Author: adam
 */

#include "User.h"
#include <iostream>

User::User(int size, int value):m_size(size),m_value(value),pValue(new int [m_size] {0}){
	for(int i=0; i<m_size; i++){
			pValue[i] = m_value;
		}
}

User::~User() {
	std::cout << "User object destroyed" << std::endl;
}

void User::print(){
	for(int i=0; i<m_size; i++){
		std::cout << pValue[i] << std::endl;
	}
}


