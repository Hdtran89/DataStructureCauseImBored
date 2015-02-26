#include <iostream>
#include "Stack.h"

using namespace std;

void main(){

	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);

	cout << s.pop() << endl;
	cout << s.pop() << endl;

	system("pause > 0");
}