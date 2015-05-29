/*
 * Coin.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"


Coin::Coin(int id) {
	this->value = rand() % 99 + 10;
	this->weight = rand() % 10 + 10;
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

