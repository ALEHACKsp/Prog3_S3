/*
 * Main.cpp
 *
 *  Created on: Dec 19, 2019
 *      Author: Erarnitox
 */
#include <iostream>
#include "Matrix.h"

int main(){
	Matrix mx{};
	std::cout << "Matrix initialized" << std::endl;
	std::cout << "Matrix: \n" <<mx << std::endl;

	mx+= 3.5;
	std::cout << "Matrix += 3.5" << std::endl;
	std::cout << "Matrix: \n" <<mx << std::endl;

	mx-= 1.3;
	std::cout << "Matrix -= 1.3" << std::endl;
	std::cout << "Matrix: \n" <<mx << std::endl;

	std::cout << "Enter the dimensions of your Matrix:\nX:";
	unsigned x;
	unsigned y;
	std::cin >> x;
	std::cout<<"Y:";
	std:: cin >> y;
	std::cout << "Enter a Matrix:" << std::endl;
	Matrix mx2{y,x,0};

	std::cin >> mx2;
	std::cout << "Your Matrix:" << std::endl;
	std::cout << "Matrix: \n" <<mx2 << std::endl;

	mx+=mx2;
	std::cout << "Matrix += your matrix" << std::endl;
	std::cout << "Matrix: \n" <<mx << std::endl;

	mx-=mx2;
	std::cout << "Matrix -= your matrix" << std::endl;
	std::cout << "Matrix: \n" <<mx << std::endl;

	return 0;
}
