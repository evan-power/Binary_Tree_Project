#include <iostream>
#include "BinaryTree.h"

void insertValues(BinaryTree& tree)
{
	tree.insert(6);
	tree.insert(5);
	tree.insert(12);
	tree.insert(2);
	tree.insert(10);
	tree.insert(24);
	tree.insert(93);
	tree.insert(17);
	tree.insert(1);
	tree.insert(7);
	tree.insert(11);
	tree.insert(3);
}


int main()
{
	auto myTree = new BinaryTree();

	insertValues(*myTree);

	myTree->print();

	Node* myNode = myTree->search(17);
	std::cout << myNode->data;

}
