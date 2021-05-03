#include <iostream>
#include <vector>
#include "sort.h"
#include "Tree.h"
#include "BinaryTree.h"

int main()
{
	BinaryTree tree = BinaryTree(10);
	tree.push(5);
	tree.push(7);
	tree.push(11);
	tree.push(3);
	/*std::vector<int> arr{ 5, 3, 6, 1, 0};
	//std::vector<char> arrC{ '#','o', '#','o', '#','o', '#','o', '#','o', '#','o'};
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << "-";
	}

	/*sort::mergeSort(arr);

	std::cout << "\n";

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << "-";
	}*/

	//std::cout << "\n" << others::max(arr);

	/*Tree tree = Tree(1);

	tree.GetRoot()->SetLeftChild(1);
	tree.GetRoot()->SetRightChild(2);

	tree.GetRoot()->GetLeftChild()->SetLeftChild(3);
	tree.GetRoot()->GetLeftChild()->GetLeftChild()->SetLeftChild(4);*/

	std::queue<int> bfs = tree.BFExplore();
	BinaryNode* node = tree.RecursiveSearch(7, tree.GetRoot());
	std::cout << node << "\n";
	std::cout << node->GetData() << "\n";

	while (!bfs.empty())
	{
		std::cout << bfs.front() << " ";
		bfs.pop();
	}

	//std::cout << others::fibonacci(50);
}
