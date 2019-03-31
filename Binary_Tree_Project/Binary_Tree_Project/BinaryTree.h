#pragma once
struct Node
{
	int data;
	Node* left;
	Node* right;
};


class BinaryTree
{
private:
	Node* root;

	void insert(int key, Node* leaf);
	void remove( Node* parent, Node* leaf);
	void remove(int key, Node* leaf);
	Node* search(int key, Node* leaf);
	void print(Node* leaf, int num_spaces);
public:
	BinaryTree();
	void insert(int key);
	void remove(int key);
	Node* search(int key);
	void print();
};



