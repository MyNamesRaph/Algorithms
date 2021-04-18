#include "BinaryNode.h"
BinaryNode::BinaryNode(int data) : m_data{data} {
	m_leftChild = nullptr;
	m_rightChild = nullptr;
}

void BinaryNode::SetLeftChild(BinaryNode* node)
{
	m_leftChild = node;
}

void BinaryNode::SetLeftChild(int data) 
{
	m_leftChild = new BinaryNode(data);
}

void BinaryNode::SetRightChild(BinaryNode* node)
{
	m_rightChild = node;
}

void BinaryNode::SetRightChild(int data)
{
	m_rightChild = new BinaryNode(data);
}

void BinaryNode::SetData(int data) 
{
	m_data = data;
}

int BinaryNode::GetData()
{
	return m_data;
}

BinaryNode* BinaryNode::GetLeftChild()
{
	return m_leftChild;
}

BinaryNode* BinaryNode::GetRightChild()
{
	return m_rightChild;
}

BinaryNode::~BinaryNode()
{
	delete m_leftChild;
	delete m_rightChild;
}
