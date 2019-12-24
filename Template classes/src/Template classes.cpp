//============================================================================
// Name        : Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ruse.h"
#include "User.h"
using namespace std;

//function declaried in Ruse.h
template<typename T>
T Ruse<T>::addMore(){
	User u1(4,4);
	return 4.3 + u1.sum();
}


int main() {

	Ruse<double> rs1(5.5, 10);
	Ruse<int> rs2(5.5, 10);

	cout << rs1.sum() << endl;
	cout << rs2.sum() << endl;

	cout << rs2.addMore() << endl;



	return 0;
};
