#ifndef Q3STACK_H
#define Q3STACK_H

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Stack
{
public:
	Stack(); //constructor
	bool isEmpty() const; //returns true if stack is empty, false otherwise
	void push(T value); //add a new item of type T and value value to the
	// stack, as long as there is still space on the stack
	T pop(); //return top element on the stack,
	//remove the returned item from stack
	int getSize() const; //return the size of the stack
private:
	T elements[30]; //elements array of size 30
	int size; //current size of stack
};




#endif