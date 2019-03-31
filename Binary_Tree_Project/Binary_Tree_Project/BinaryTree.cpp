#include "BinaryTree.h"
#include <iostream>

constexpr int SPACE_INCREMENT = 10;

BinaryTree::BinaryTree()
{
	root = nullptr;
}


void BinaryTree::insert(const int key, Node* leaf)
{
	if (key < leaf->data)
	{
		if (leaf->left != nullptr)
		{
			insert(key, leaf->left);
		}
		else
		{
			leaf->left = new Node();
			leaf->left->data = key;
			leaf->left->left = nullptr;
			leaf->left->right = nullptr;
		}

	}
	else
	{
		if (leaf->right != nullptr)
		{
			insert(key, leaf->right);
		}
		else
		{
			leaf->right = new Node();
			leaf->right->data = key;
			leaf->right->left = nullptr;
			leaf->right->right = nullptr;
		}

	}
}


void BinaryTree::insert(const int key)
{
	if (root != nullptr)
	{
		insert(key, root);
	}
	else
	{
		root = new Node();
		root->data = key;
		root->left = nullptr;
		root->right = nullptr;
	}
}


void BinaryTree::remove(const int key)
{

}


Node* BinaryTree::search(const int key, Node* leaf)
{
	if (key < leaf->data)
	{
		search(key, leaf->left);
	}
	else if (key > leaf->data)
	{
		search(key, leaf->right);
	}
	else
	{
		return leaf;
	}
}


Node* BinaryTree::search(const int key)
{
	return search(key, root);
}


void BinaryTree::print(Node* leaf, int num_spaces)
{
	num_spaces += SPACE_INCREMENT;

	if (leaf->right != nullptr)
	{
		print(leaf->right, num_spaces);
	}

	for (int i = 0; i < num_spaces; i++)
	{
		std::cout << " ";
	}
	std::cout << leaf->data << std::endl;

	if (leaf->left != nullptr)
	{
		print(leaf->left, num_spaces);
	}
}

void BinaryTree::print()
{
	this->print(root, 0);
}


