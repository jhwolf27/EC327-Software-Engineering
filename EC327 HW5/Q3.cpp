#include <iostream>
#include "CoolString.h"
#include "CoolString.cpp"
using namespace std;

int main(){
	char x1[9] = "bacdef";
	char x2[9] = "aacdef";
	CoolString s1(x1, 6);
	CoolString s2(x2, 6);
	if (s1 == s2)
		cout << "True" << endl;
	int a;
	cin >> a;
	return 0;
}

