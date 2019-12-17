/*
 * User.h
 *
 *  Created on: 7 Dec 2019
 *      Author: adam
 */

#ifndef USER_H_
#define USER_H_

#include <memory>

class User {
private:
	const int SIZE = 10;
	int m_size;
	//Needed shared_ptr not unique_ptr for overloaded operator=()
	std::shared_ptr<int []> pValue;


public:
	User();
	virtual ~User();

	const User& operator=(const User& rhs);

	void calculate();



};

#endif /* USER_H_ */
