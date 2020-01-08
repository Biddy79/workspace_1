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



	char word[] {"Hello"};

	char *pStart = &word[0];
	cout << *pStart << endl;

	cout << "Number of elements in array:" << sizeof(word) << endl;

	char *pEnd = &word[sizeof(word) -2];
	cout << *pEnd << endl;

	while(pStart < pEnd){

		char save = *pEnd;
		*pEnd = *pStart;
		*pStart = save;

		pEnd--;
		pStart++;


	}

	cout << word << endl;



	/*char word[] = "Hello";

	int nChars = sizeof(word)-1;

	char *pStart = word;
	char *pEnd = word + nChars-1;

	cout << *pStart << endl;
	cout << *pEnd << endl;

	while(pStart < pEnd){

		char save = *pStart;
	    *pStart = *pEnd;
	    *pEnd = save;

		pStart++;
		pEnd--;

	}

	cout << word << endl;*/




	return 0;
}
