/*
 * Coin.h
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */

#ifndef COIN_H_
#define COIN_H_

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

class Coin {

	friend ostream& operator<<(ostream&, const Coin &);

private:
	int value;
	int weight;
	int id;

public:
	Coin(int id);
	void printCoinInfo();
	virtual ~Coin();

};

ostream& operator<<(ostream&, const Coin &);

#endif /* COIN_H_ */
