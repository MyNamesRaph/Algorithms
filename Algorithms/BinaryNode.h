#pragma once
class BinaryNode
{
private:
	int m_data;
	BinaryNode* m_leftChild;
	BinaryNode* m_rightChild;
public:
	BinaryNode(int data);
	void SetLeftChild(BinaryNode* node);
	void SetLeftChild(int data);
	void SetRightChild(BinaryNode* node);
	void SetRightChild(int data);
	void SetData(int data);
	int GetData();
	BinaryNode* GetLeftChild();
	BinaryNode* GetRightChild();

	~BinaryNode();
};

