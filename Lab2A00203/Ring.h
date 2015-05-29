/*
 * Ring.h
 *
 *  Created on: Apr 25, 2015
 *      Author: Diana
 */

#ifndef RING_H_
#define RING_H_

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Ring {

	friend ostream& operator<<(ostream&, const Ring &);

private:
	int value;
	int weight;
	int id;

public:
	Ring(int id);
	void printRingInfo();
	virtual ~Ring();

};

ostream& operator<<(ostream&, const Ring &);




#endif /* RING_H_ */
