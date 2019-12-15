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
	int m_size;
	int m_value;
	std::unique_ptr<int []> pValue;

public:
	User();
	User(const User& other);
	User(int size, int value);

	const User& operator=(const User& rhs);
	virtual ~User();

	void print();

};

#endif /* USER_H_ */
