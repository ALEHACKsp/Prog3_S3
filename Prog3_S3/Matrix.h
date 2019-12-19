/*
 * Matrix.h
 *
 *  Created on: Dec 19, 2019
 *      Author: Erarnitox
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <vector>

class Matrix {
private:
	std::vector<std::vector<double>> werte;
	void resize(unsigned int sizeX, unsigned int sizeY, double init = 0.0);
public:
	Matrix(unsigned int sizeX = 4, unsigned int sizeY = 4, double init = 0.0);
	virtual ~Matrix();
};

#endif /* MATRIX_H_ */
