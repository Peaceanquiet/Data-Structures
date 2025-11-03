#pragma once

class LinkedList
{
	struct Node {
		int data = 0;
		Node* next = nullptr;
	};
	Node* start = nullptr;
public:
	void push(int newData);
};

