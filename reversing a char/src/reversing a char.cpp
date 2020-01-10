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

cout << "////////////////////////Reversing a char///////////////////////////////////////" << endl;

	char word[] {"Hello"};

	//char pointer pointing to address of word at index 0
	char *pStart = &word[0];
	//if needing to  access address of *pStart  use &pStart
	cout << &pStart << endl;

	cout << "Number of elements in array:" << sizeof(word) << endl;

	char *pEnd = &word[sizeof(word) -2];
	cout << &pEnd << endl;


	while(pStart < pEnd){

		char save = *pEnd;
		*pEnd = *pStart;
		*pStart = save;

		pEnd--;
		pStart++;


	}

	cout << word << endl;


////////////////////Alternate way to do the same as above/////////////////////////

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


cout << "//////////////////////////reversing with vectors//////////////////////////////" << endl;

	vector<string> text{"five", "four", "three", "two", "one"};

	string *pVecStart = &text[0];
	cout << *pVecStart << endl;

	// can also be done using iterator and incrementing to move up the vector

	/*vector<string>::iterator pVecStart = text.begin() +1;
	cout << *pVecStart << endl;
    */

	vector<string>::iterator itEnd = text.end() -1;
	cout << *itEnd << endl;

	//Note &*itEnd will give the address of iterator
	while(pVecStart < &*itEnd){

		string save = *pVecStart;
		*pVecStart = *itEnd;
		*itEnd = save;

		pVecStart++;
		&*itEnd--;

	}

   for(auto texts: text){
	   cout << texts << ", " << flush;
   }



	return 0;
}
