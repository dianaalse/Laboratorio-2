/*
 * Ring.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"

Ring::Ring(int id) {
	this->value = rand() % 99 + 10;
	this->weight = rand() % 10 + 10;
	this->id = id;
}

ostream& operator<<(ostream& out, const Ring & ring) {
	out << "ID: " << "RG-" << ring.id;
	out << " Valor: " << ring.value;
	out << " Peso: " << ring.weight;
	return out;
}

Ring::~Ring() {
}
