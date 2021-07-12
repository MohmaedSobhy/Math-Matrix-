#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class matrix
{
private:
	int r1, r2, c1, c2;
	float matrixone[5][5];
	float matrixtwo[5][5];
public:
	matrix();
	void SetMatrixONe();
	void setMatrixTwo();
	void getMatrixOne();
	void getMatrixTwo();
	int getrow1();
	int getColumn1();
	int getrow2();
	int getColumn2();
	void addTwoMatrix();
	void substractTwoMatrix();
	void TransposeMatrixOne();
	void TransposeMatrixTwo();
	void multiplcation();
	
};

