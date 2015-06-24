/*
 * Collar.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"


Collar::Collar(int id) {
	this->value = rand() % 2000 + 2000;
	this->weight = rand() % 500 + 500;
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

