#include"LinkedList.h"
#include<chrono>
#include<iostream>


int main() {

	LinkedList list;

	list.printList();
	list.push(1);
	list.printList();
	list.push_back(2);
	list.printList();
	list.insert(3, 3);
	list.printList();
	list.push_back(4);
	list.printList();
	list.push_back(5);
	list.printList();
	list.remove(1);
	list.printList();
	list.printList();
	list.pop();
	list.printList();
	list.pop_back();
	list.printList();
	list.push(7);
	list.printList();
	list.push_back(9);
	list.printList();

	return 0;
}