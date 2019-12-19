/*
 * Matrix.h
 *
 *  Created on: Dec 19, 2019
 *      Author: Erarnitox
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <vector>
#include <iostream>

class Matrix {
private:
	std::vector<std::vector<double>> werte;
	void resize(unsigned int sizeX, unsigned int sizeY, double init = 0.0);
public:
	Matrix(unsigned int sizeX = 4, unsigned int sizeY = 4, double init = 0.0);
	virtual ~Matrix();

	Matrix& operator-();
	Matrix& operator+=(const Matrix& b);
	Matrix& operator-=(const Matrix& b);
	Matrix& operator+=(double b);
	Matrix& operator-=(double b);

	std::vector<double> operator[](int index);

	friend std::ostream operator<<(std::ostream o, const Matrix& m);
	friend std::istream operator>>(std::istream o, const Matrix& m);
	friend Matrix& operator+(const Matrix& a, const Matrix& b);
	friend Matrix& operator-(const Matrix& a, const Matrix& b);
	friend Matrix& operator+(const Matrix& a, double b);
	friend Matrix& operator-(const Matrix& a, double b);
	friend Matrix& operator+(double a, const Matrix& b);
	friend Matrix& operator-(double a, const Matrix& b);
};

std::ostream operator<<(std::ostream o, const Matrix& m);
std::istream operator>>(std::istream o, const Matrix& m);
Matrix& operator+(const Matrix& a, const Matrix& b);
Matrix& operator-(const Matrix& a, const Matrix& b);
Matrix& operator+(const Matrix& a, double b);
Matrix& operator-(const Matrix& a, double b);
Matrix& operator+(double a, const Matrix& b);
Matrix& operator-(double a, const Matrix& b);
#endif /* MATRIX_H_ */
