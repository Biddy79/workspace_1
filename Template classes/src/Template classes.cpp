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

int main() {

	//User object crreated using template class Ruse
	Ruse<User> u1(5);

	//accessing u1.print() functions by calling getObj() in Ruse template class
	u1.getObj().print();



	return 0;
}
