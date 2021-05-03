#include "sort.h"

void sort::selection(std::vector<int>& arr)
{
	int n = arr.size();

	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] < arr[min]) min = j;
		}
		if (i != min)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

void sort::bubble(std::vector<int>& arr)
{
	int n = arr.size();

	for (int i = n; i > 1; i--)
	{
		bool sorted = true;
		for (int j = 0; j < i-1; j++)
		{
			if (arr[j+1] < arr[j])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				sorted = false;
			}
		}

		if (sorted) return;
	}
}

void sort::sortchars(std::vector<char>& arr)
{
	int n = arr.size();

	for (int i = n; i > 1; i--)
	{
		bool sorted = true;
		for (int j = 0; j < i-1; j++)
		{
			if (arr[j+1] == '#')
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				sorted = false;
			}
		}

		if (sorted) return;
	}
}

 void sort::merge(std::vector<int>& input1, std::vector<int>& input2, std::vector<int>& output)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < input1.size() && j < input2.size())
	{
		if (input1[i] < input2[j])
		{
			output[k] = input1[i];
			i++;
		}
		else
		{
			output[k] = input2[j];
			j++;
		}
		k++;
	}
	if (i == input1.size())
	{
		for (int c = j; c < input2.size(); c++)
		{
			output[k] = input2[c];
			k++;
		}
	}
	else
	{
		for (int b = i; b < input1.size(); b++)
		{
			output[k] = input1[b];
			k++;
		}
	}
}

void sort::mergeSort(std::vector<int>& input)
{
	std::vector<int> B{};
	std::vector<int> C{};
	if (input.size() > 1)
	{
		for (int i = 0; i < input.size()/2; i++)
		{
			B.push_back(input[i]);
		}

		for (int i = input.size()/2; i < input.size(); i++)
		{
			C.push_back(input[i]);
		}
		mergeSort(B);
		mergeSort(C);
		merge(B, C, input);
	}
}

int others::fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int others::max(std::vector<int>& input)
{
	if (input.size() > 2)
	{
		std::vector<int> B{};
		std::vector<int> C{};
		for (int i = 0; i < input.size() / 2; i++)
		{
			B.push_back(input[i]);
		}

		for (int i = input.size() / 2; i < input.size(); i++)
		{
			C.push_back(input[i]);
		}
		int maxB = max(B);
		int maxC = max(C);
		if (maxB > maxC) return maxB;
		else return maxC;
	}
	else if (input.size() == 2)
	{
		if (input[0] > input[1]) return input[0];
		else return input[1];
	}
	else
	{
		return input[0];
	}
}