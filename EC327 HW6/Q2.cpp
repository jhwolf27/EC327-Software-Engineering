#include <iostream>
#include <string>
#include <cstdlib>
#include "Q2Stack.h"

using namespace std;

//returns true if the parentheses in the expression are correct, false otherwise.
bool parenthesisCheck(const string &expression) 
{
	Stack<char> myStack;

	string valids = "0123456789/*+-(){}"; //string of valid characters.
	
	int lengthEx = expression.length(); // get lengths of strings
	int lengthVal = valids.length();
	
	int brackets = 0;
	if ((expression[0] == '}') || (expression[0] == ')')) //the first character cannot be a right parabracket
	{
		cout << "Incorrect: order of parenthesis is incorrect" << endl;
		return false;
	}
	for (int i = 0; i < lengthEx; i++)
	{
		char current = expression[i];
		char parabra[4] = { '{', '}', '(', ')' };
		if (current == parabra[0] || current == parabra[1] || current == parabra[2] || current == parabra[3])
		{
			if (current == parabra[0] || current == parabra[2])
			{
				brackets++; //add to bracket counter
				myStack.push(current); //add character to myStack
			}
			else if (current == parabra[1] || current == parabra[3])
			{
				brackets--; //remove bracket as this counteracts the other bracket
				char paracheck = myStack.pop();

				if (current == parabra[1] && paracheck != parabra[0])
				{ //brackets dont match
					cout << "Incorrect: order of parenthesis is incorrect" << endl;
					return false;
				}
				else if (current == parabra[3] && paracheck != parabra[2])
				{ //para dont match
					cout << "Incorrect: order of parenthesis is incorrect" << endl;
					return false;
				}

			}

		}
	}
	for (int i = 0; i < lengthEx; i++) {
		for (int j = 0; j < lengthVal; j++) 
		{
			char current2 = expression[i];
			char validity = valids[j];
			if (current2 == validity)
			{
				goto next;
			}
			else if ((current2 != validity) && (j == lengthVal - 1)) 
			{
				cout << "Error: Unknown Characters are used in the expression" << endl;
				return false;
			}
		}
	}
	next:
	if (brackets == 0) { //checks number of bracketss left and right
		cout << "Correct" << endl;
		return true;
	}
	else if (brackets != 0)
	{
		cout << brackets;
		cout << "Incorrect: # of left and right parentheses are not matching" << endl;;
		return false;
	}
}

int main() {
	string userinput;
	cout << "Please Enter an Expression desu: " << endl; //gathers expression from user
	cin >> userinput;
	parenthesisCheck(userinput);

	//test for visual studio
	int asdf;
	cin >> asdf;

	return 0;
}