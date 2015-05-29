/*
 * Crown.h
 *
 *  Created on: Apr 25, 2015
 *      Author: Diana
 */

#ifndef CROWN_H_
#define CROWN_H_

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Crown {

	friend ostream& operator<<(ostream&, const Crown &);

private:
	int value;
	int weight;
	int id;

public:
	Crown(int id);
	void printCrownInfo();
	virtual ~Crown();

};

ostream& operator<<(ostream&, const Crown &);



#endif /* CROWN_H_ */
