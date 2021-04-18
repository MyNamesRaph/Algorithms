#include "sort.h"

void sort::selection(std::vector<int>& arr)
{
	int n = arr.size();

	for (int i = 0; i < n-1; ++i)
	{
		int min = i;
		for (int j = 0; j < n; ++j)
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
		for (size_t j = 0; j < i-1; j++)
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