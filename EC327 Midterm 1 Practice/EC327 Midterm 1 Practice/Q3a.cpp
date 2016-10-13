#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(char word[ ], int size)
{
	int a;
	for (int i = 0; i < size; i++)
	{
		int j = (size - (i + 1));
		if (word[i] == word[j])
			a = 1;
		else
			return 0;
	}
	if (a = 1)
		return 1;
}

int main()
{
	int b;
	char word[7] = { 'r', 'c', 'c', 'n', 'd', 'c', 'r' };
	if (isPalindrome(word, 7))
		cout << "YAY" << endl;
	else
		cout << "SHIT" << endl;
	cin >> b;

}