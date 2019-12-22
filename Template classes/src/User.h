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
	int m_num;

public:
	User();
	User(int num);
	virtual ~User();

	void print();
};

#endif /* USER_H_ */
