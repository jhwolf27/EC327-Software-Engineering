#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("randomletters.txt", fstream::app);
	int num = rand() % 26;  // Number in the range [ 0...25 ]
	char lower = static_cast<char>('a' + num); // Convert to lower case
	char rletters[100]; // character array to hold random letters
	for (int i = 0; i < 100; i++) //assigning array of random letters
	{
		rletters[i] = ('a' + (rand() % 26));
	}
	
	for (int j = 0; j < 98; j++) //print 100 random letters to file
	{
		myfile << rletters[j] <<"\t" ;
	}

	
	return 0;//terminate
}