#include "LinkedList.h"
#include "Q4Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() :LinkedList<double>() {
//empty cause inherited as child class stack
}

void Stack::push(double value) 
{
	if (size != 0) //size does not = 0 then add last
		addLast(value);
	else if (size == 0)
		addFirst(value);

}

bool Stack::isEmpty()
{
	if (size == 0) //if size ==0 its empty
		return true;
	else
		return false;
}

double Stack::pop()
{
	if (size == 1)
		return removeFirst();
	else if (size != 1)
		return removeLast();
}
