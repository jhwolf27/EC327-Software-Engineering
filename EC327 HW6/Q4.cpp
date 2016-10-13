#include <iostream>
#include "Q4Stack.h"
#include "LinkedList.h"

using namespace std;

int main(){
	Stack mystack;
	mystack.push(2.8);
	mystack.push(3.9);
	mystack.push(5.2);
	while (!mystack.isEmpty()) {
		cout << "Stack item " << mystack.getSize();
		cout << "  " << " is " << mystack.pop() << endl;
	}
}