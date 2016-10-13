#include "Q2Stack.h"

using namespace std;


//template stack class functions
template<class T>
Stack<T>::Stack()  //constructor
{
	size = 0;
}

template<class T>
bool Stack<T>::isEmpty() const //check if empty
{
	if (size == 0) //if empty return true
		return true;
	else //if not return false
		return false;
}

template<class T>
void Stack<T>::push(T value) {

	if ((size) <= 29) //if size is not full, add value and increment size to next space
	{
		elements[size] = value; 
		size++;
	}
}

template<class T>
T Stack<T>::pop() {

	if (size != 0){// if current size is 0, top element is 0
		size--;
		return elements[size];
	}
	else
		return elements[size];
}

template<class T>
int Stack<T>::getSize() const 
{
	return size; //returns the size
}

template class Stack<int>;

template class Stack<double>;

template class Stack<char>;

template class Stack<string>;