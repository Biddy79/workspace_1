/*
 * User.cpp
 *
 *  Created on: 22 Dec 2019
 *      Author: adam
 */

#include "User.h"
#include <iostream>

User::User():m_num1{0}, m_num2{0}{

}

User::User(int num1, int num2):m_num1(num1), m_num2(num2) {
	// TODO Auto-generated constructor stub

}

User::User(const User& other){
	this->m_num1 = other.m_num1;
	this->m_num2 = other.m_num2;
}

User::~User() {
	// TODO Auto-generated destructor stub
}

void User::print(){
	std::cout << m_num1 << ", " << m_num2 << std::endl;
}
