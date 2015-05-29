/*
 * Collar.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"


Collar::Collar(int id) {
	this->value = rand() % 99 + 10;
	this->weight = rand() % 10 + 10;
	this->id = id;
}

ostream& operator<<(ostream& out, const Collar & collar) {
	out << "ID: " << "COL-" << collar.id;
	out << " Valor: " << collar.value;
	out << " Peso: " << collar.weight;
	return out;
}

Collar::~Collar() {
}

