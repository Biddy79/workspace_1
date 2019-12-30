//============================================================================
// Name        : Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ruse.h"

class User{
private:
	int num;

public:
	User();

};

using namespace std;

int main() {

	Ruse<int> useInt;
	useInt.add(10, 10);

	Ruse<double> useDouble;
	useDouble.add(4.5, 3.7);

	Ruse<double> newObj();

	return 0;
};
