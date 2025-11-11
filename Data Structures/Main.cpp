#include"LinkedList.h"
#include"BinarySearchTree.h"
#include<chrono>
#include<iostream>
#include<iomanip>

int main() {

	BST tree;
	tree.insert(15);
	tree.insert(10);
	tree.insert(20);
	tree.insert(16);
	tree.insert(16);
	tree.insert(25);
	tree.insert(40);
	tree.insert(21);
	std::cout << std::setw(23) << "In order traversal: ";
	tree.inOrderTraversal(tree.getRoot());
	std::cout << "\n";
	std::cout << std::setw(23) << "pre order traaversal: ";
	tree.preOrderTraversal(tree.getRoot());
	std::cout << "\n";
	std::cout << std::setw(23) << "post order traaversal: ";
	tree.postOrderTraversal(tree.getRoot());
	return 0;
}