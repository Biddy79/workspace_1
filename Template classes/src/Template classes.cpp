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

	Ruse<double> rs1(5.5, 10);
	Ruse<int> rs2(5.5, 10);

	cout << rs1.sum() << endl;
	cout << rs2.sum() << endl;

	cout << rs2.addMore() << endl;

	return 0;
};
