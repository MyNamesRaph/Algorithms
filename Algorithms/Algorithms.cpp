#include <iostream>
#include <vector>
#include "sort.h"
#include "Tree.h"

int main()
{
	/*std::vector<int> arr{ 5, 3, 6, 1 };

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << "-";
	}

	sort::selection(arr);

	std::cout << "\n";

	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << "-";
	}*/

	Tree tree = Tree(1);

	tree.GetRoot()->SetLeftChild(1);
	tree.GetRoot()->SetRightChild(2);

	tree.GetRoot()->GetLeftChild()->SetLeftChild(3);
	tree.GetRoot()->GetLeftChild()->GetLeftChild()->SetLeftChild(4);

	std::queue<int> bfs = tree.BFSearch();

	while (!bfs.empty())
	{
		std::cout << bfs.front();
		bfs.pop();
	}
}
