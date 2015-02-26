#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
	maxSize = 10;
	top = 0;
	A = new int(maxSize);
}

int Stack::pop()
{
	int value = 0;
	if (!isEmpty()){
		top--;
		value = A[top];
		return value;
	}

}

bool Stack::isEmpty()
{
	bool value;
	(top == 0) ? value = true : value = false;
	return value;
}

bool Stack::isFull()
{
	bool value;
	(top == maxSize) ? value = true : value = false;
	return value;
}

void Stack::push(int item)
{
	if (!isFull()){
		A[top] = item;
		top++;
	}
}
Stack::~Stack()
{
}
