//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "User.h"
using namespace std;

int main() {

	//Create object u1
	User u1(10, 0);
	u1.print();

	cout << "===============" << endl;

	//Create object on heap with unique ptr also using copy constructor of User class passing u1
	unique_ptr<User> u2(new User(u1));
	u1.print();

	cout << "===============" << endl;

	//Can Create and array of User using on heap using unique_ptr
	// but can not use constructor with parameters like (u1) copy constructor
	// unique_ptr<User []> u3(new User[3](u1));
	unique_ptr<User []> u3(new User[3]);
	u3[0].print();






	return 0;
}
