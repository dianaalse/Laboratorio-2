/*
 * Collar.h
 *
 *  Created on: Apr 25, 2015
 *      Author: Diana
 */

#ifndef COLLAR_H_
#define COLLAR_H_

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Collar {

	friend ostream& operator<<(ostream&, const Collar &);

private:
	int value;
	int weight;
	int id;

public:
	Collar(int id);
	void printCollarInfo();
	virtual ~Collar();

};

ostream& operator<<(ostream&, const Collar &);



#endif /* COLLAR_H_ */
