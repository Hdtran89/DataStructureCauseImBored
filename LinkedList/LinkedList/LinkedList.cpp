#include "LinkedList.h"


LinkedList::LinkedList()
{
	head = tail = NULL;
}
void LinkedList::add(string fname, string lname, int age)
{
	Node * temp = new Node;
	temp->age = age;
	temp->firstname = fname;
	temp->lastname = lname;
	if (head == NULL){
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
		tail->next = NULL;
	}
}
void LinkedList::remove(string fname, string lname, int age)
{
	Node * temp = head->next;
	Node * prev = head;
	while(temp != NULL){
		if (head->age == age && head->firstname == fname && head->lastname == lname){
			head = head->next;
			delete temp;
			break;
		}
		else {
			prev -> next = temp->next;
			delete temp;
			break;
		}
		prev = temp;
		temp = temp->next;
	}
}

void LinkedList::printlist()
{
	Node * temp = head;
	while (temp != NULL){
		//std::cout << "first name: " << temp->firstname << endl;
		//std::cout << "last name: "  << temp->lastname<< endl;
		std::cout << "age: " << temp->age << endl;
		temp = temp->next;
	}
}
LinkedList::~LinkedList()
{
}
