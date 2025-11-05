#include"LinkedList.h"

int main() {

	LinkedList list;

	list.push(1);
	list.push(2);
	list.push(3);
	list.push(4);
	list.push_back(5);
	list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.iterate_list();

	return 0;
}