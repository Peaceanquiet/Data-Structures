#include"LinkedList.h"

void LinkedList::push(int newData) {

	Node* newNode = new Node;
	newNode->data = newData;
	newNode->next = nullptr;

	if (start == nullptr) {
		start = newNode;
		count++;
	}
	else {
		newNode->next = start;
		start = newNode;
		count++; 
	}
}

void LinkedList::push_back(int newData) {
	if (count == 0) {
		push(newData);
		return;
	}

	Node* newNode = new Node;
	newNode->data = newData;
	newNode->next = nullptr;
	Node* currNode = start;

	while (currNode->next != nullptr) {
		currNode = currNode->next;
	}

	currNode->next = newNode;
	count++;
}

void LinkedList::insert(int newData, int index) {

	if (index < 1 || index > count+1) {

		std::cout << "Outside of range" << std::endl;
		return;
	}

	Node* currNode = start;

	if (start == nullptr) {

		push(newData);
		return;
	}

	else if (index == 1) {

		push(newData);
		return;
	}

	else if (index == count+1) {

		push_back(newData);
		return;
	}
	else {	

		Node* newNode = new Node;
		newNode->data = newData;
		newNode->next = nullptr;

		for (int i = 1; i < index - 1; i++) {

			currNode = currNode->next;
		}

		newNode->next = currNode->next;
		currNode->next = newNode;
		count++;
		return;
	}
}

void LinkedList::printList() {

	if (start == nullptr) {

		std::cout << "No list..." << std::endl;
		return;
	}
	Node* currNode = start;

	while (currNode != nullptr) {

		std::cout << currNode->data << " ";
		currNode = currNode->next;
	}
	std::cout << std::endl;
}

void LinkedList::remove(int index) {

	if (start == nullptr) {

		std::cout << "No list..." << std::endl;
		return;
	}

	if (index <= 0 || index > count) {

		std::cout << "Outside of range...\n";
		return;
	}

	Node* currNode = start;

	if (index == 1) {

		start = start->next;
		delete currNode;
		count--;
		return;
	}

	for (int i = 0; i < index-2; i++) {

		currNode = currNode->next;
	}

	Node* toDelete = currNode->next;
	currNode->next = currNode->next->next;
	delete toDelete;
	count--;
}

void LinkedList::pop() {

	remove(1);
}

void LinkedList::pop_back() {

	remove(count);
}

LinkedList::~LinkedList() {

	Node* currNode = start;

	while (currNode != nullptr) {

		Node* toDelete = currNode;
		currNode = currNode->next;
		delete toDelete;
	}
}