#pragma once
#include "BinaryNode.h"
#include <queue>

class BinaryTree
{
private:
	BinaryNode* m_root;
public:
	BinaryTree(int data);
	~BinaryTree();
	BinaryNode* GetRoot();
	void push(int data);
	std::queue<int> BFExplore();
	BinaryNode* RecursiveSearch(int value, BinaryNode* start);
};