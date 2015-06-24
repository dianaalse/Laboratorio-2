/*
 * Coin.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"


Coin::Coin(int id) {
	this->value = rand() % 99 + 1;
	this->weight = rand() % 100 + 100;
	this->id = id;
}

ostream& operator<<(ostream& out, const Coin & coin) {
	out << "ID: " << "CO-" << coin.id;
	out << " Valor: " << coin.value;
	out << " Peso: " << coin.weight;
	return out;
}

Coin::~Coin() {
}

