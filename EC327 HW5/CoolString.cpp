#include "CoolString.h"
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <assert.h>
using namespace std;

CoolString::CoolString(char stringchrs[], int _size)
{
	assert(strlen(stringchrs) == _size); //Precondition, should be same size for testing
	chars = stringchrs;
	size = _size;
}

CoolString CoolString::append(int n, char ch)
{
	int newsize = size + n + 1;
	char *newArray=new char[newsize];
	int i = 0;
	while (i < size) {
		newArray[i] = chars[i];
		i++;
	}
	while (i < size + n + 1){
		newArray[i] = ch;
		i++;
	}
	newArray[size + n] = 0;
	return CoolString::CoolString(newArray, size + n);
}

CoolString CoolString::assign(CoolString s, int n)
{ 
	int newsize = size + n + 1;
	char *newArray = new char[newsize];
	int i = 0;
	while (i < n) {
		newArray[i] = s.chars[i];
		i++;
	}
	int j = n;
	while (j <= s.size) {
		newArray[j] = s.chars[j];
		j++;
	}
	return CoolString::CoolString(newArray, size + n);
}

int CoolString::compare(CoolString s)
{
	int i = 0;
	while (i < size) {
		if (s.chars[i] < chars[i])
			return -1;
		if (s.chars[i] > chars[i])
			return 1;
		i++;
	}
	if (s.chars[i] == chars[i])
		return 0;
}

int CoolString::compare(int index, int n, CoolString s)
{
	int i = 0;
	while (i < index+n-1) {
		if (s.chars[index] < chars[i])
			return -1;
		if (s.chars[index] > chars[i])
			return 1;
		i++;
		index++;
	}
	if (s.chars[i] == chars[i])
		return 0;
}

bool CoolString::isAnagram(const CoolString &s)
{
	// Get lenghts of both strings
	int n1 = size;
	int n2 = s.size;

	// If lenght of both strings is not same, then they cannot
	// be anagram
	if (n1 != n2)
		return false;

	// Sort both strings
	sort(chars, chars + size);
	sort(s.chars, s.chars + s.size);

	// Compare sorted strings
	for (int i = 0; i < n1; i++)
		if (s.chars[i] != chars[i])
			return false;

	return true;
}

CoolString CoolString::commonPrefix(const CoolString &s)
{
	int i = 0;
	char *newArray = new char[size];
	while (i < size){
		if (s.chars[i] == chars[i])
			newArray[i] = chars[i];
		else
			return CoolString::CoolString(newArray, i);

	}
}

bool operator==(const CoolString &s1 ,const CoolString &s2) {
	sort(s1.chars, s1.chars + s1.size);
	sort(s2.chars, s2.chars + s2.size);
	if (s1.size == s2.size)
		return false;
	for (int i = 0; i < s1.size; i++)
		if (s2.chars[i] != s1.chars[i])
			return false;

	return true;
}

/*int main()
{
	char x1[9] = "aacdef";
	char x2[9] = "aacdef";
	CoolString s1(x1, 6);
	CoolString s2(x2, 6);
	cout << s1.isAnagram(s2);
	int a;
	cin >> a;
	return 0;
}*/ //FUNCTION TESTING