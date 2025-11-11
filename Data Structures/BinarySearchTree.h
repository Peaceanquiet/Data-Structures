#pragma once

//Binary Search Tree
class BST {

	//Binary Search Tree Node
	struct BSTN {
		//Data within Node
		int data = 0;
		//Pointer to left child
		BSTN* left = nullptr;
		//Pointer to right child
		BSTN* right = nullptr;
	
		BSTN() {}
		BSTN(int newData = 0 , BSTN* leftChild = nullptr, BSTN* rightChild = nullptr): 
			data(newData), 
			left(leftChild), 
			right(rightChild) {}
		void IOT(BSTN* node) {

		}
	};

	BSTN* root = nullptr;

public:

	// Insert a new node
	BSTN* insert(int newData);

	//Left->Root->Right
	void inOrderTraversal(BSTN* node);

	//Root->Left->Right
	void postOrderTraversal(BSTN* node);

	//Left->Right->Root
	void preOrderTraversal(BSTN* node);

	BSTN* getRoot();
};

