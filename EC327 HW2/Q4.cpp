//include libraries and stuff
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>

//SORRY FOR RANDOM ERROR MESSAGES. I WAS GETTING IRRITATED FROM LONG HOURS OF CODING AND NEEDED TO CHEER MYSELF UP. I HOPE THEY AMUSE YOU ATLEAST.

using namespace std;
//variables
int b = 0;
//int int function
bool blackjack(int c, int x)
{
 if ((c >= 2 and c <= 10) and (x >= 2 and x <= 10))
 {
   b = c+x;
 }
 else if ((c < 2) or (c > 10) or (x < 2) or (x > 10))
 {
   cout << "ERROR BRO GET IT TOGETHER" << endl;
 }
 if (b == 21)
 {
	return true;
 }
 else if (b != 21)
 {
	return false;
 }
}

//char char function
bool blackjack(char c, char x)
{
 if (c == 'A') //checking if it falls into parameters
 {
   c = 11;
 }
 else if ((c == 'K') or (c == 'Q') or (c == 'J'))
 {
   c = 10;
 }
 else cout << "ERROR AGAIN OMG" << endl;
 if (x == 'A') //checking if it falls into parameters
 {
   x = 11;
 }
 else if ((x == 'K') or (x == 'Q') or (x == 'J'))
 {
   x = 10;
 }
 else cout << "ERROR CMON BRO GET SMART" << endl; 
 int b = c+x;
 if (b == 21)
 {
	return true;
 }
 else if (b != 21);
 {
	return false;
 }
}

//char int function
bool blackjack(char c, int x)
{
 int b = 0;
 if (c == 'A') //checking if it falls into parameters
 {
   c = 11;
 }
 else if ((c == 'K') or (c == 'Q') or (c == 'J'))
 {
   c = 10;
 }
 else cout << "ERROR PLEASE YOU BAKA" << endl;
 if (x >= 2 and x <= 10) //checking if it falls into parameters
 {
  b = c+x;
 }
 else cout << "ERROR YOU DUM DUM" << endl;
 if (b == 21)
 {
	return true;
 }
 else if (b != 21);
 {
	return false;
 }
}

//int char function
bool blackjack(int c, char x)
{
 int b = 0;
 if (x == 'A') //checking if it falls into parameters
 {
   x = 11;
 }
 else if ((x == 'K') or (x == 'Q') or (x == 'J'))
 {
   x = 10;
 }
 else cout << "hi, this is Siri, you messed up. ERROR" << endl;
 if (c >= 2 and c <= 10)  //checking if it falls into parameters
 {
  b = c+x;
 }
 else cout << "Hi, I'm not real. neither are you, but you messed up. ERROR" << endl;
 if (b == 21)  //checking if it falls into parameters
 {
	return true;
 }
 else if (b != 21);
 {
	return false;
 }
}


int main()
{
 //test boolean function. if true then print true, if not then print false. input your own values here.
 cout << blackjack('A', 10) << endl;
return 0;
}
