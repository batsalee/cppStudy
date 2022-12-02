#include <iostream>
#include "heapSort.h"

void print(int arr[])
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

int main()
{
	int arr[5] = { 3, 4, 1, 2, 5 };

	std::cout << "정렬 전 : ";
	print(arr);

	heapSort(arr, sizeof(arr) / sizeof(arr[0]));

	std::cout << "정렬 후 : ";
	print(arr);

	return 0;
}