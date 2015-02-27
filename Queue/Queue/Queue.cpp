#include "Queue.h"


Queue::Queue()
{
	maxSize = 5;
	front = 0;
	rear = -1;
	QueueArray = new int(maxSize);
}

int Queue::Dequeue()
{
	int item;
	if (!isEmpty()){
		item = QueueArray[front];
		front++;
		return item;
	}
}
void Queue::Enqueue(int item)
{
	if (!isFull()){	
		rear++;
		QueueArray[rear] = item;
	}
	else {
		rear %= maxSize;
		QueueArray[rear] = item;
	}
}
bool Queue::isFull()
{
	bool value;
	(front == maxSize) ? value = true : value = false;
	return value;
}

bool Queue::isEmpty()
{
	bool value;
	(front == -1) ? value = true : value = false;
	return value;
}
Queue::~Queue()
{
}
