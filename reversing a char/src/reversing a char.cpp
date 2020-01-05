//============================================================================
// Name        : reversing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;




int main() {

	char word[] = "RADAR";

	int nChars = sizeof(word)-1;

	char *pStart = word;
	char *pEnd = word + nChars-1;


	cout << *pEnd << endl;



	return 0;
}
