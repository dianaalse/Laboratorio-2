/*
 * Sack.h
 *
 *  Created on: Apr 26, 2015
 *      Author: Diana
 */

#ifndef SACK_H_
#define SACK_H_

#include "Treasure.h"
#include <new>

class Sack {
friend class Treasure;
friend ostream& operator<<(ostream&, const Sack &);

public:
	Sack();
	void generateSack(Coin**, Ring**,Crown**, Collar**,int,int,int,int,int,
	int, int, int);
	virtual ~Sack();

private:
	int totalweight;
	Sack ** osack;
};

ostream& operator<<(ostream&, const Sack &);

#endif /* SACK_H_ */
