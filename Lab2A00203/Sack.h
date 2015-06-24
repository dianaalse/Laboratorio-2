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
	void generateSack(int, int, int, int);
	template<class T>
	void imprimirV(T * v, int n, bool cambioLinea) {
		for (int i = 0; i < n; ++i) {
			file << v[i] << " ";
		}
		if (cambioLinea) {
			file << endl;
		}
	}
	virtual ~Sack();

private:
	int totalWeight;
	//Sack ** osack;
};

ostream& operator<<(ostream&, const Sack &);

#endif /* SACK_H_ */
