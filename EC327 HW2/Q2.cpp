//include libraries and stuff
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;
int getInput()
{ 
  //defining variables and getting input
  double num = 0;
  cout << "Enter a fractional number: ";
  cin >> num;
  double count = 0;
  //main function
  if (num < 0) { //in this situation num is a negative number therefore convert to positive
   num = num * -1; 
   if (num <= 1) {
    do 
    {
      num = num*10;
      count = count-1;
    }while (num < 1 and num != 1);
   }
   if (num >= 10) {
    do
    {
      num = num/10;
      count = count + 1;
    }while (num > 10 and num != 10);}
  num = num *-1;
}
  else //if positive go through function normally.
  if (num <= 1) {
   do 
   {
     num = num*10;
     count = count-1;
   }while (num < 1 and num != 1);
  }
  if (num >= 10) {
   do
   {
     num = num/10;
     count = count + 1;
   }while (num > 10 and num != 10);
  }
  cout << "In normalized form: " << endl;
  cout << setprecision(4) << "Mantissa: " << num << setprecision(1) << ", Exponent: " << count << endl; //setprecision sets it to 4 significant figures, 3 decimal places
  return 0;
}

int main()
{
 getInput();
}
