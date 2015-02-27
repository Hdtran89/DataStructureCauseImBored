#include<iostream>
#include "Queue.h"

using namespace std;

void main(){

	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	cout << q.Dequeue() << endl;
	q.Enqueue(40);
	q.Enqueue(50);
	q.Enqueue(60);
	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
	cout << q.Dequeue() << endl;
	system("pause > 0");
}