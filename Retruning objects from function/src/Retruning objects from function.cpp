//============================================================================
// Name        : Retruning.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include "Test.h"

using namespace std;

//returning a pointer to new Test object
Test* getObj() {
	Test *pTest = new Test(0);

	return pTest;
}

int main() {

	//creating object t1 of Test
	Test t1(0);
	t1.print();

	cout << endl;

	//setting a pointer to getObj() which returns a new a pointer to a new test object
	Test *pTest = getObj();
	pTest->print();

	cout << endl;

	//MUST DELETE HERE!!!!
	delete pTest;

	return 0;
}
