#include "BinaryTree.h"

BinaryTree::BinaryTree(int data)
{
	m_root = new BinaryNode(data);
}

BinaryNode* BinaryTree::GetRoot()
{
	return m_root;
}


BinaryTree::~BinaryTree()
{
	delete m_root;
}

void BinaryTree::push(int data)
{
	BinaryNode* node = m_root;
	while (true)
	{
		if (data > node->GetData())
		{
			if (node->GetRightChild() == nullptr)
			{
				node->SetRightChild(new BinaryNode(data));
				return;
			}
			else
			{
				node = node->GetRightChild();
			}
		}
		else if (data < node->GetData())
		{
			if (node->GetLeftChild() == nullptr)
			{
				node->SetLeftChild(new BinaryNode(data));
				return;
			}
			else
			{
				node = node->GetLeftChild();
			}
		}
		else return;
	}
}

std::queue<int> BinaryTree::BFExplore()
{
	std::queue<BinaryNode*> visited = {};
	std::queue<int> output = {};

	visited.push(m_root);
	output.push(m_root->GetData());

	while (!visited.empty())
	{
		BinaryNode* v = visited.front();
		visited.pop();

		BinaryNode* adjacentEdges[2] = { v->GetLeftChild(), v->GetRightChild() };

		for (BinaryNode* edge : adjacentEdges)
		{
			if (edge != nullptr)
			{
				visited.push(edge);
				output.push(edge->GetData());
			}

		}
	}

	return output;

}

BinaryNode* BinaryTree::RecursiveSearch(int value, BinaryNode* start)
{
	if (start == nullptr) return nullptr;
	if (value == start->GetData()) return start;
	if (value > start->GetData()) RecursiveSearch(value, start->GetRightChild());
	if (value > start->GetData()) RecursiveSearch(value, start->GetLeftChild());
}