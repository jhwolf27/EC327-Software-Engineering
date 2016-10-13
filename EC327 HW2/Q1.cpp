//include libraries and stuff
#include <iostream>
#include <math.h>

using namespace std;

//main function
int userInput()
{
 //declaring variables
 int xone=0;
 int xtwo=0;
 int yone=0;
 int ytwo=0;
 int radone=0;
 int radtwo=0;
 float dist=0;
 float radtotal=0;
 float mindistance = 0;
 //getting input for variables
 cout << "Enter the information for the first circle"<<endl;
 cout << "x-coordinate: ";
 cin >> xone;
 cout << "y-coordinate: ";
 cin >> yone;
 cout << "radius: ";
 cin >> radone;
 cout << "Enter the information for the second circle"<<endl;
 cout << "x-coordinate: ";
 cin >> xtwo;
 cout << "y-coordinate: ";
 cin >> ytwo;
 cout << "radius: ";
 cin >> radtwo;
 //calculations for distance, radius, and minimum distance
 dist = sqrt(((xone-xtwo)*(xone-xtwo))+((yone-ytwo)*(yone-ytwo)));
 radtotal = (radone+radtwo);
 mindistance = (dist - radtotal);
 //overlap comparison
 if (radtotal >= dist) {
    cout << "THE CIRCLES OVERLAP." <<endl;
 return 0;
 }
 else if (radtotal < dist) {
    cout << "THE MINIMUM DISTANCE BETWEEN THE CIRCLES IS " << mindistance << "." << endl;
 return 0;
 //instructions say ATLEAST 2 so no need to round off answer
 }
 return 0; //termination
}

int main() 
{
 userInput();
}
