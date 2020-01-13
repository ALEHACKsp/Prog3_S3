/*
 * Matrix.cpp
 *
 *  Created on: Dec 19, 2019
 *      Author: Erarnitox
 */
#include <vector>
#include "Matrix.h"

Matrix::Matrix(unsigned int sizeX,unsigned int sizeY, double init){
	this->resize(sizeX, sizeY, init);
}

void Matrix::resize(unsigned int sizeX, unsigned int sizeY, double init){
		this->werte.resize(sizeX);

		for(unsigned i=0; i < this->werte.size(); ++i){
			this->werte[i].resize(sizeY, init);
		}
}

Matrix Matrix::operator-(){
	Matrix neg{this->werte.size(), this->werte[0].size()};
	for(unsigned i = 0; i < this->werte.size(); ++i){
		for(unsigned j = 0; j < this->werte[i].size(); ++j){
			neg[i][j] = -this->werte[i][j];
		}
	}
	return neg;
}

Matrix& Matrix::operator+=(const Matrix& b){
	*this = *this+b;
	return *this;
}

Matrix& Matrix::operator-=(const Matrix& b){
	*this = *this-b;
	return *this;
}

Matrix& Matrix::operator+=(double b){
		*this = *this+b;
		return *this;
}

Matrix& Matrix::operator-=(double b){
	*this = *this-b;
	return *this;
}

std::vector<double>& Matrix::operator[](int index){
	return this->werte[index];
}

std::ostream& operator<<(std::ostream& o, const Matrix& m){
	for(unsigned i=0; i < m.werte.size(); ++i){
		for(unsigned j=0; j < m.werte[i].size(); ++j){
			o << m.werte[i][j] << '\t';
		}
		o << '\n';
	}
	return o;
}

std::istream& operator>>(std::istream& is, Matrix& m){
	for(unsigned i=0; i < m.werte.size(); ++i){
		for(unsigned j=0; j < m.werte[i].size(); ++j){
			is >> m[i][j];
		}
	}
	return is;
}

Matrix operator+(const Matrix& a, const Matrix& b){
	if(a.werte.size() >= b.werte.size() && a.werte.size() > 0
			&& a.werte[0].size() >= b.werte[0].size()){
		Matrix c = a;
		for(unsigned i = 0; i < b.werte.size(); ++i){
			for(unsigned j = 0; j < b.werte[i].size(); ++j){
				c.werte[i][j] += b.werte[i][j];
			}
		}
		return c;
	}else{
		return (b + a);
	}
}

Matrix operator-(const Matrix& a, const Matrix& b){
	if(a.werte.size() >= b.werte.size() && a.werte.size() > 0
				&& a.werte[0].size() >= b.werte[0].size()){
			Matrix c = a;
			for(unsigned i = 0; i < b.werte.size(); ++i){
				for(unsigned j = 0; j < b.werte[i].size(); ++j){
					c.werte[i][j] -= b.werte[i][j];
				}
			}
			return c;
		}else{
			return (b - a);
		}
}

Matrix operator+(const Matrix& a, double b){
	Matrix c = a;
	for(unsigned i = 0; i < c.werte.size(); ++i){
		for(unsigned j = 0; j < c.werte[i].size(); ++j){
			c.werte[i][j] += b;
		}
	}
	return c;
}

Matrix operator-(const Matrix& a, double b){
	Matrix c = a;
	for(unsigned i = 0; i < c.werte.size(); ++i){
		for(unsigned j = 0; j < c.werte[i].size(); ++j){
			c.werte[i][j] -= b;
		}
	}
	return c;
}

Matrix operator+(double a, const Matrix& b){
	return b+a;
}

Matrix operator-(double a, const Matrix& b){
	return b-a;
}
