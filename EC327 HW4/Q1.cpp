#include<iostream>
#include<string>
#include<cmath>

using namespace std;


char* largestCommonSubstr(const char s1[], const char s2[]) {
	//intialize values
	int arrayLength = 0;
	int longLength = 0;
	int HeldIndex = 0;
	for (int i = 0; i < strlen(s1); i++)
	{
		for (int j = 0; j < strlen(s2); j++)
		{
			arrayLength = 0; //reinitialize in loop
			while (s1[i] == s2[j])
			{
				i++;
				j++;
				arrayLength++;
			} //check 2 strings length
			if (arrayLength > longLength)
			{ 
				longLength = arrayLength;
				HeldIndex = i - arrayLength; //if new length longer than longest replace index

			}
		}
	}
	char* LowSub = new char[longLength + 1];
	for (int i = 0; i < longLength; i++)
	{
		LowSub[i] = s1[i + HeldIndex]; //filling in the string
	}
	LowSub[longLength] = '\n'; //inserting null terminator
	return LowSub;
}

int main(){
	//intializing
	char input1[100];
	char input2[100];
	//acquiring user inputs
	cout << "First string: " << endl;
	cin >> input1;
	cout << "Second string: " << endl;
	cin >> input2;
	char* LCS = largestCommonSubstr(input1, input2);
	cout << "LCS is: " << LCS << endl;
	int a; //testing purposes remove later
	cin >> a;
	return 0;
}