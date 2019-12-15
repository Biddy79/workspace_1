/*
 * User.cpp
 *
 *  Created on: 7 Dec 2019
 *      Author: adam
 */

#include "User.h"
#include <iostream>

User::User(){

}

User::User(const User& other){
	m_size = other.m_size;
	m_value = other.m_value;
	pValue = std::unique_ptr<int []>{0};
}

const User& User::operator=(const User& rhs){
	std::cout << "assignment operator running " << std::endl;

	m_size = rhs.m_size;
	m_value = rhs.m_value;


	return *this;
}

User::User(int size, int value):m_size(size),m_value(value),pValue(new int [m_size] {0}){

	for(int i=0; i<m_size; i++){
			pValue[i] = m_value+i;
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


