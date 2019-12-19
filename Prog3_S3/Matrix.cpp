/*
 * Matrix.cpp
 *
 *  Created on: Dec 19, 2019
 *      Author: Erarnitox
 */
#include <vector>
#include "Matrix.h"

Matrix::Matrix(unsigned int sizeX,unsigned int sizeY, double init) {
	this->werte = new std::vector<std::vector<double>>();
}

Matrix::~Matrix() {
	// TODO Auto-generated destructor stub
}

