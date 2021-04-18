#include "Tree.h"
#include "BinaryNode.h"
#include <queue>

Tree::Tree(int data)
{
	m_root = new BinaryNode(data);
}

BinaryNode* Tree::GetRoot()
{
	return m_root;
}

std::queue<int> Tree::BFSearch()
{
	std::queue<BinaryNode*> visited = {};
	std::queue<int> output = {};

	visited.push(m_root);

	while (!visited.empty())
	{
		BinaryNode* v = visited.front();
		visited.pop();

		BinaryNode *adjacentEdges[2] = { v->GetLeftChild(), v->GetRightChild() };

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

Tree::~Tree()
{
	delete m_root;
}