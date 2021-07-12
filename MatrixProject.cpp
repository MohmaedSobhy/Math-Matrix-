using namespace std;
#include <iostream>
#include<string.h>
#include"matrix.h"

int main()
{
	matrix x;
	x.SetMatrixONe();
	x.setMatrixTwo();
	
	// operation (+,-) you should check your row and columns are equal in both matrix
	x.addTwoMatrix(); 
	x.substractTwoMatrix();

	// you can Transpose any matrix 
	x.TransposeMatrixOne();
	x.TransposeMatrixTwo();



   
}

