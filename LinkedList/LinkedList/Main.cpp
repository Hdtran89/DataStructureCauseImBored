#include <iostream>
#include "LinkedList.h"

using namespace std;

void main()
{
	LinkedList list;
	list.add("hieu", "tran", 26);
	list.add("romando", "garcia", 23);
	
	list.remove("romando", "garcia", 23);
	list.printlist();
	system("pause > 0");
}