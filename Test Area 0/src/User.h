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
	std::unique_ptr<int> *pValue();


public:
	User();
	virtual ~User();
};

#endif /* USER_H_ */
