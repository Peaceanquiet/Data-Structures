#include "LinkedList.h"

void LinkedList::push(int newData) {
	Node* newNode = new Node;
	newNode->data = newData;
	
	if (start == nullptr) {
		start = newNode;
	}
	else {
		newNode->next = start;
		start = newNode;
	}
	
}