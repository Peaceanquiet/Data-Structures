#pragma once
#include<iostream>

class LinkedList {
	struct Node {
		int data = 0;
		Node* next = nullptr;
	};
	Node* start = nullptr;
	int count = 0;
public:
	void push(int newData);
	void push_back(int newData);
	void insert(int newData, int index);
	void printList();
	void remove(int index);
	void pop();
	void pop_back();
	~LinkedList();
};