/*
 * Treasure.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */

#include "stdafx.h"

Treasure::Treasure() {
	this->id = 0;
	//el objeto tesoro se crea llamando la funcion que crea cada vector individualmente
	createCoins();
	createRings();
	createCrowns();
	createCollars();
}

void Treasure::createCoins() {
	q1 = rand() % 9 + 10;
	ocoins = new Coin*[q1];
	for (int i = 0; i < q1; ++i) {
		ocoins[i] = new Coin(id++);
	}
}

void Treasure::createRings() {

	 q2 = rand() % 5 + 5;
	 orings = new Ring*[q2];
	 for (int i = 0; i < q2; i++) {
	 orings[i] = new Ring (id++);
	 }

}

void Treasure::createCrowns() {
	q3 = rand() % 9 + 1;
	ocrowns = new Crown*[q3];
	for (int i = 0; i < q3; i++) {
		ocrowns[i] = new Crown(id++);
	}

}

void Treasure::createCollars() {
	q4 = rand() % 10 + 10;
	ocollars = new Collar*[q4];
	for (int i = 0; i < q4; i++) {
		ocollars[i] = new Collar (id++);
	}

}

void Treasure::printTreasure() {
	for (int i = 0; i < q1; ++i) {
		cout << *ocoins[i] << endl;
	}
	for(int i=0; i < q2; ++i){
		cout << *orings[i] << endl;
	}
	for(int i=0; i < q3; ++i){
		cout << *ocrowns[i] << endl;
	}
	for(int i=0; i < q4; ++i)
		cout << *ocollars[i] << endl;
}

ostream& operator<<(ostream& out, const Treasure & t) {
	for (int i = 0; i < t.q1; ++i) {
			out << *t.ocoins[i] << endl;
		}
		for(int i=0; i < t.q2; ++i){
			out << *t.orings[i] << endl;
		}
		for(int i=0; i < t.q3; ++i){
			out << *t.ocrowns[i] << endl;
		}
		for(int i=0; i < t.q4; ++i)
			out << *t.ocollars[i] << endl;
	return out;
}


Treasure::~Treasure() {
	for (int i = 0; i < q1; ++i) {
		delete ocoins[i];
	}
	delete ocoins;

	for (int i = 0; i < q2; ++i) {
			delete orings[i];
		}
		delete orings;

	for (int i = 0; i < q3; ++i) {
				delete ocrowns[i];
			}
			delete ocrowns;

	for (int i = 0; i < q4; ++i) {
					delete ocollars[i];
				}
				delete ocollars;
}

