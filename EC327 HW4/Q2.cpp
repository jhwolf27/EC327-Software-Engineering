//libraries and stuff
#include <iostream>
using namespace std;

int* TripleCapacity(int* list, int size) //declare a pointer
{
	//new array size = 15 
	int* newsize = new int[3 * size];
	//copy in first five values 
	for (int i = 0; i<5; i++)
	{
		newsize[i] = list[i];
	}
	//return pointer
	return newsize;
}

int main()
{
	//new empty array of size 5
	int newArray[5];
	//assign 5 initial values
	newArray[0] = 1;
	newArray[1] = 2;
	newArray[2] = 3;
	newArray[3] = 4;
	newArray[4] = 5;

	//assign pointer from TripleCapacity to pointer returned by TripleCapacity
	int* pTripleCapacity = TripleCapacity(newArray, 5);

	cout << "Enter 10 numbers [1-100]: "; //ask for input 10 numbers into pTripleCapacity
	for (int i = 5; i<15; i++)
	{
		cin >> pTripleCapacity[i];
	}
	//print out the array
	for (int j = 0; j<15; j++)
	{
		cout << pTripleCapacity[j] << " ";
	}
	return 0;
}

