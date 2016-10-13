#ifndef Q4STACK_H
#define Q4STACK_H

#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

class Stack : public LinkedList<double> {
public:
	Stack();
	void push(double value);
	bool isEmpty();
	double pop();
};


#endif