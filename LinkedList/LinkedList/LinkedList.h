#pragma once
#include <iostream>
using namespace std;

struct Node{
	Node * next;
	string firstname;
	string lastname;
	int age;
};

class LinkedList
{
private:
	Node * head;
	Node * tail;
public:
	LinkedList();
	void remove(string,string,int);
	void add(string,string,int);
	void printlist();
	~LinkedList();
};

