#include <iostream>
#include <cmath>

using namespace std;

double computeSeries(int n)
{
	if (n == 0)
		return 0;
	else
		return ((1.0 / n) + computeSeries(n - 1.0));
}

int main()
{
	int a;
	cout << computeSeries(2) << endl;
	cin >> a;
}

bool isPalindrome(char word[], int size)
{
	for (int i = 0; i = floor(size / 2); i++) //floor roundsdown
	{
		if (word[i] != word[size - 1 - i])
			return 0;
	}
	return 1;
}
int Bitcount(const int n) //returns the '#' bits in n
{
	int temp = n; int counter = 0;
	for (int i = 0; i <32; i++)
	{
		if ((temp % 2) == 0)
			counter++;
		temp = temp >> 1; //right shift
	}
}
int printup(int counter)
{
	if (counter == 0)
		return 0;
	else
	{
		printup(--counter);
		cout << counter << endl;
		return 0;
	}
}