//============================================================================
// Name        : Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Ruse.h"

using namespace std;

//constructor declaration found in Ruse.h
template<class T>
Ruse<T>::Ruse(){

}
//constructor declaration found in Ruse.h
template<class T>
Ruse<T>::Ruse(T obj){
	this->m_obj = obj;
}
//function declaration found in Ruse.h
template<class T >
void Ruse<T>::print(){
	std::cout << m_obj << std::endl;
}

int main() {

	Ruse<int> useInt;
	useInt.add(10, 10);

	Ruse<double> useDouble;
	useDouble.add(4.5, 3.7);

	Ruse<string> useString("Hello");
	useString.print();

	Ruse<char> useChar('a');
	useChar.print();





	return 0;
};
