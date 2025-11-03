#pragma once

class LinkedList
{
	struct Node {
		int data;
		Node* next;
	};
	Node* start = nullptr;
public:
	void push(int newData);
};

