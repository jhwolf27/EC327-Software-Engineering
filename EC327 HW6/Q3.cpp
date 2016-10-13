#include <iostream>
#include "Q3Stack.h"
#include "Q3Stack.cpp"

using namespace std;

int main()
{
	char userinput;
	cout << "Do You Want to Add to the stack? (Y/N)" << endl;
	cin >> userinput;
	Stack<char> myStack;
	if (userinput == 'Y' || userinput == 'y') //Y tests for exception in nonempty. Will return nothing
		myStack.push('C');
	else if (userinput == 'N' || userinput == 'n')// N tests for exception in empty
	{ //do nothing
	}
	try
	{
		char tester = myStack.pop();
	}
	catch (int n)
	{
		cout << "EXCEPTION" << n << ": LIST IS EMPTY" << endl; //empty returns Exception
	}
	int a;
	cin >> a;

	return 0;
}