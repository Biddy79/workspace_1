/*
 * Test.h
 *
 *  Created on: 13 Jan 2020
 *      Author: adam
 */

#ifndef TEST_H_
#define TEST_H_

#include <memory>

class Test {
private:
	const int M_SIZE = 6;
	int m_count;
	std::unique_ptr<int []> m_num;


public:
	Test(int count);
	virtual ~Test();

	void print();
};

#endif /* TEST_H_ */
