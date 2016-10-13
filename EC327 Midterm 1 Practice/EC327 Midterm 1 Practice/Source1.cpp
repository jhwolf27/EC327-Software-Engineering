#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num = 1;
	char *cptr;

	cptr = (char *)&num;

	if (*cptr)
		printf("little endian\n");
	else
		printf("big endian\n");

	int a;
	cin >> a;
}
