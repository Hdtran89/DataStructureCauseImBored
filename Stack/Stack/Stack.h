#pragma once
class Stack
{
private:
	int top;
	int *A;
	int maxSize;
public:
	Stack();

	int pop();
	void push(int);
	bool isEmpty();
	bool isFull();

	~Stack();
};

