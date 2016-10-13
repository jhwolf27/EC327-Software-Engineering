//libraries
#include <iostream>
using namespace std;

int main()
{
	//Set dimensions of matrix array
	int matrix1[4][3];
	int matrix2[3][2];
	int matrixF[4][2];

	cout << "Write a 4x3 integer matrix and a 3x2 integer matrix: \n";

	//Write first 4 inputs into first
	//First Matrix rows
	for (int i = 0; i < 4; i++)
	{
		//First matrix columns
		for (int j = 0; j < 3; j++)
			cin >> matrix1[i][j];
	}

	//Write next 3 inputs into second 
	//Second Matrix rows
	for (int k = 0; k < 3; k++)
	{
		//Second matrix columns
		for (int l = 0; l < 2; l++)
			cin >> matrix2[k][l];
	}
	//Final Matrix
	//MatrixF rows
	for (int m = 0; m<4; m++)
	{
		//MatrixF columns
		for (int n = 0; n<2; n++)
		{
			matrixF[m][n] = 0; //intialize
			for (int p = 0; p<3; p++) //write into matrix by summation and multiplication
			{
				matrixF[m][n] = matrixF[m][n] + (matrix1[m][p] * matrix2[p][n]);
			}
		}
	}

	//Print out final matrix
	//Final matrix rows
	for (int s = 0; s<4; s++)
	{
		///Final Matrix Columns
		for (int t = 0; t < 2; t++)
		{
			cout << matrixF[s][t] << " ";
		}
		cout << endl;
	}
	return 0; //terminate function  
}

