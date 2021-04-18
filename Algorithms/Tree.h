#pragma once
#include "BinaryNode.h"
#include <queue>

class Tree
{
private:
	BinaryNode* m_root;
public:
	Tree(int data);
	~Tree();
	BinaryNode* GetRoot();
	std::queue<int> BFSearch();
};