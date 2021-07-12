#include "matrix.h"
#include<iostream>
#include<string.h>
using namespace std;

matrix::matrix()
{
	r1 = 0, r2 = 0, c1 = 0, c2 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrixone[i][j] = 0;
			matrixtwo[i][j] = 0;
	    } 
	}
}

void matrix::SetMatrixONe()
{
	cout << "enter number of row and number of columns\n";
	cin >> r1 >> c1;
	cout << "enter elements of array\n";
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
			cin >> matrixone[i][j];
	}
}

void matrix::setMatrixTwo()
{
	cout << "enter number of row and number of columns\n";
	cin >> r2 >> c2;
	cout << "enter elements of array\n";
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
			cin >> matrixtwo[i][j];

	}
}

void matrix::getMatrixOne()
{
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
			cout << matrixone[i][j] << " ";

		cout << endl;
	}
}

void matrix::getMatrixTwo()
{
	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
			cout << matrixtwo[i][j] << " ";
	}
	cout << endl;
}

int matrix::getrow1()
{
	return r1;
}

int matrix::getColumn1()
{
	return c1;
}

int matrix::getrow2()
{
	return r2;
}

int matrix::getColumn2()
{
	return c2;
}

void matrix::addTwoMatrix()
{
	if (r1!= r2||c1!=c2)
	{
	cout << "BE careful\n";
	cout << "number of row in matrix one should be equal number of row in matrix two\n";
	cout << "number of column in matrix one should be equal number of column in matrix two\n ";
	}
	else {
		cout << "The result of add two matrix is:.....\n";
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{

				cout << matrixone[i][j] + matrixtwo[i][j] << " ";
			}
			cout << endl;
		}
	}
}

void matrix::substractTwoMatrix()
{
	if (r1 != r2 || c1 != c2)
	{
		cout << "BE careful\n";
		cout << "number of row in matrix one should be equal number of row in matrix two\n";
		cout << "number of column in matrix one should be equal number of column in matrix two\n ";
	}
	else {
		cout << "The result is:...... \n";
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			  cout << matrixone[i][j] - matrixtwo[i][j] << " ";
			
			cout << endl;
		}
	}

}

void matrix::TransposeMatrixOne()
{
	int temb[5][5];

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
				temb[j][i] = matrixone[i][j];		
		}
	}
	// put elements 
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			matrixone[i][j] = temb[i][j];
		}
	}



}

void matrix::TransposeMatrixTwo()
{
	int temb[5][5];

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			temb[j][i] = matrixtwo[i][j];
		}
	}
	// put elements 
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			matrixtwo[i][j] = temb[i][j];
		}
	}
}

void matrix::multiplcation()
{
	if (c1 == r2)
	{
		cout << "The result is : ..... \n";
		int sum = 0;
		for (int i = 0; i < r1; i++)// row of matrixOne
		{ 
			for (int j = 0; j < c2; j++)//columns 
			{   
				sum = 0;
				for (int k = 0; k < c1; k++)
				{
					sum += matrixone[i][k] * matrixtwo[k][j];
				}
				cout << sum <<"  ";		
			}
			cout << endl;
		}
	}
	else {
		cout <<"number of column in matrix one should equal number of row in matrix two\n";
	}
}
