/*
 * User.cpp
 *
 *  Created on: 22 Dec 2019
 *      Author: adam
 */

#include "User.h"
#include <iostream>

User::User():m_num{0}{

}

User::User(int num):m_num(num) {
	// TODO Auto-generated constructor stub

}

User::~User() {
	// TODO Auto-generated destructor stub
}

void User::print(){
	std::cout << m_num << std::endl;
}
