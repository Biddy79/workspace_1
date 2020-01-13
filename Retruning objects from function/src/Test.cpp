/*
 * Test.cpp
 *
 *  Created on: 13 Jan 2020
 *      Author: adam
 */

#include "Test.h"
#include <iostream>

Test::Test(int count):m_count(count), m_num(new int [M_SIZE] {0}){
		for(int i=0; i<M_SIZE; i++){
			m_num[i] = m_count++;
		}
}

Test::~Test() {
	std::cout << "Distructor called" << std::endl;
}

void Test::print(){

	for(int i=0; i<M_SIZE; i++){
	std::cout << m_num[i] << ", " << std::flush;
	}

}

