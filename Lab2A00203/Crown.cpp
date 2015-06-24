/*
 * Crown.cpp
 *
 *  Created on: Apr 18, 2015
 *      Author: Diana
 */
#include "stdafx.h"

Crown::Crown(int id) {
	this->value = rand() % 9000 + 1000
	this->weight = rand() % 1500 + 500;
	this->id = id;
}

ostream& operator<<(ostream& out, const Crown & crown) {
	out << "ID: " << "CR-" << crown.id;
	out << " Valor: " << crown.value;
	out << " Peso: " << crown.weight;
	return out;
}

Crown::~Crown() {
}

