#include "BinarySearchTree.h"
#include<iostream>

BST::BSTN* BST::insert(int newData) {

	if (root == nullptr) {
		BSTN* newNode = new BSTN(newData, nullptr, nullptr);
		//std::cout << "Adding " << newNode->data << std::endl;
		root = newNode;
		//std::cout << newNode->data << " is now the head.\n";
		return newNode;
	}

	BSTN* newNode = new BSTN(newData, nullptr, nullptr);
	BSTN* currNode = root;
	//std::cout << "adding " << newNode->data << std::endl;

	while (currNode->left != newNode || currNode->right == newNode) {
		if (newNode->data > currNode->data)
		{
			if (currNode->right == nullptr)
			{
				//std::cout << newNode->data << " is now " << currNode->data << "'s right child.\n";
				currNode->right = newNode;
				return newNode;
			}

			else {
				//std::cout << "Moving from " << currNode->data << " to " << currNode->right->data << std::endl;
				currNode = currNode->right;
			}
		}

		if (newNode->data < currNode->data)
		{
			if (currNode->left == nullptr)
			{
				//std::cout << newNode->data << " is now " << currNode->data << "'s left child.\n";
				currNode->left = newNode;
				return newNode;
			}

			else {
				//std::cout << "Moving from " << currNode->data << " to " << currNode->left->data << std::endl;
				currNode = currNode->left;
			}
		}

		if (newNode->data == currNode->data)
		{
			//std::cout << newNode->data << " already exists..." << std::endl;
			delete newNode;
			return nullptr;
		}
	}
	return nullptr;
}

void BST::inOrderTraversal(BSTN* node) {
	if (node == nullptr)
		return;
	inOrderTraversal(node->left);
	std::cout << node->data << " ";
	inOrderTraversal(node->right);
}

void BST::preOrderTraversal(BSTN* node) {
	if (node == nullptr)
		return;
	std::cout << node->data << " ";
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
}

void BST::postOrderTraversal(BSTN* node) {
	if (node == nullptr)
		return;
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	std::cout << node->data << " ";
}

BST::BSTN* BST::getRoot() {
	return root;
}