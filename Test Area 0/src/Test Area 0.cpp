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

	cout << "User object created using unique_ptr " << endl;
	unique_ptr<User> pUser(new User(5));
	pUser->calculate();

	cout << "\n"  << endl;

	User u1(10);
	u1.calculate();

	cout << "\n"  << endl;

	User u2(15);

	//using overloaded operator=()
	u2 = u1;
	u2.calculate();

	cout << "\n"  << endl;

	//using copy constructor
	User u4(u1);
	u4.calculate();
	return 0;
}
