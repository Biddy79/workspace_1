/*
 * User.h
 *
 *  Created on: 22 Dec 2019
 *      Author: adam
 */

#ifndef USER_H_
#define USER_H_

class User {
private:
	int m_num1;
	int m_num2;

public:
	User();
	User(int num1, int num2);
	User(const User& other);
	virtual ~User();

	void print();
	int sum();
};

#endif /* USER_H_ */
