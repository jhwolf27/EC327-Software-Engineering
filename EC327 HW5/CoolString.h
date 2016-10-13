using namespace std;

#ifndef COOLSTRING_H
#define COOLSTRING_H

class CoolString
{
private:
	char* chars;
	int size;	
public:
	CoolString(char chars[], int size);
	CoolString append(int n, char ch);
	CoolString assign(CoolString s, int n);
	int compare(CoolString s);
	int compare(int index, int n, CoolString s);
	bool isAnagram(const CoolString &s);
	CoolString commonPrefix(const CoolString &s);
	friend bool operator==(CoolString const & left, CoolString const & right);
	//bool CoolString::operator==(const CoolString &s, const CoolString &s2);
	//friend bool operator==(CoolString &s1, CoolString &s2);

};

#endif