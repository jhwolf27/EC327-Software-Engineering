//include libraries and stuff
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int octal()
{
  //defining variables
  long int final = 0;
  long int numone = 1;
  long int numtwo = 1;
  long int total = 0;
  long int i=1;
  long int ix=1;
  long int octalone = 0;
  long int octaltwo = 0;
  //main function
  //recieving input
  cout << "Enter two non-negative integers: ";
  cin >> numone;
  cout << "";
  cin >> numtwo;
  //conversion from dec to oct
  while(numone != 0)
		{  
			total = numone % 8;  
			numone /= 8;  		 
			octalone+=total*i;
                        i*=10;
		}	
  while(numtwo != 0)
		{  
			total = numtwo % 8;  
			numtwo /= 8;  		 
			octaltwo+=total*ix;
                        ix*=10;
		}	
  
  //subtracting octals. non-zero digits represent differing digits
  if (octalone > octaltwo) {
	final = octalone - octaltwo; }
  if (octalone < octaltwo) {
	final = octaltwo - octalone; } 
  long int holder = 0;
  long int final2 = 0;
  long int count = 0;
  //counting non-zero digits
  while (final !=0){
         holder = final % 10;
         final /= 10;
	 if (holder != 0) {
	 	count++;
	 }
  }
  cout << "These numbers differ in " << count << " octal digits." << endl;  
}

int main()
{
octal();
}
