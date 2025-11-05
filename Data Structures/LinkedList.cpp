#include "LinkedList.h"
#include<iostream>

void LinkedList::push(int newData) {
	Node* newNode = new Node;
	newNode->data = newData;
	
	if (start == nullptr) {
		start = newNode;
	} else {
		newNode->next = start;
		start = newNode;
}	}

void LinkedList::push_back(int newData) {
	Node* newNode = new Node;
	newNode->data = newData;

	if (start == nullptr) {
		push(newData);
	} else {
		Node* temp = start;

		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newNode;
}	}

void LinkedList::iterate_list() {
	std::cout << "Iterating List...\n";
	Node* iter = start;
	while (iter != nullptr) {
		std::cout << iter->data << " ";
		iter = iter->next;
}	}