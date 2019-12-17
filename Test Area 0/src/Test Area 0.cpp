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
	unique_ptr<User> pUser(new User);
	pUser->calculate();

	cout << "\n"  << endl;

	User u1;
	User u2;

	//using overloaded operator=()
	u2 = u1;
	u2.calculate();

	cout << "\n"  << endl;

	return 0;
}
