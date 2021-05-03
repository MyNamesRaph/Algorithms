#pragma once
#include <vector>


namespace sort
{
	void selection(std::vector<int>& arr);
	void bubble(std::vector<int>& arr);
	void sortchars(std::vector<char>& arr);
	void mergeSort(std::vector<int>& input);
	void merge(std::vector<int>& input1, std::vector<int>& input2, std::vector<int>& output);
}

namespace others
{
	int fibonacci(int n);
	int max(std::vector<int>& input);
}

