#include "LinkedList.h"
#include<iostream>

void LinkedList::push(int newData) {
	Node* newNode = new Node;
	newNode->data = newData;
	
	if (start == nullptr) {
		start = newNode;
	}
	else {
		newNode->next = start;
		start = newNode;
}	}

void LinkedList::push_back(int newData) {
	Node* newNode = new Node;
	newNode->data = newData;

	if (start == nullptr) {
		push(newData);
	}
	else {
		Node* temp = start;
		while (start != nullptr) {
			std::cout << start->data << " " << start->next << std::endl;
			start = start->next;

}	}	}

void LinkedList::iterate_list() {
	while (start != nullptr) {
		std::cout << "Node: " << start << std::endl;
		std::cout << "Data: " << start->data << std::endl;
		std::cout << "Next: " << start->next << std::endl << std::endl;
		start = start->next;
}	}