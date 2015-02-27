#pragma once
class Queue
{
private:
	int front;
	int *QueueArray;
	int maxSize;
	int rear;
public:
	Queue();
	void Enqueue(int);
	int Dequeue();
	bool isFull();
	bool isEmpty();
	~Queue();
};

