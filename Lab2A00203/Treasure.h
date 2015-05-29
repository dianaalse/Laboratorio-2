/*
 * Treasure.h
 *
 *  Created on: Apr 25, 2015
 *      Author: Diana
 */

#ifndef TREASURE_H_
#define TREASURE_H_
#include "Ring.h"
#include "Coin.h"
#include "Crown.h"
#include "Collar.h"
#include <new>

class Treasure {

friend ostream& operator<<(ostream&, const Treasure &);
friend class Sack;

public:
	Treasure();
	void createCoins();
	void createRings();
	void createCrowns();
	void createCollars();
	void printTreasure();
	virtual ~Treasure();

private:
	int id;
	int q1, q2, q3, q4;
	Coin ** ocoins;
	Ring ** orings;
	Crown ** ocrowns;
	Collar ** ocollars;
};

ostream& operator<<(ostream&, const Treasure &);

#endif /* TREASURE_H_ */
