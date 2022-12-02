#include "selectionSort.h"

void selectionSort(int arr[], size_t size)
{
	for (int i = 0; i < size - 1; i++) {
		
		// �迭 �� �ּڰ� ã��
		int min_index = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[min_index])
				min_index = j;
		}

		// �ּڰ��� ���ʿ� ���� ���� swap
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

/*testcase
#include <iostream>
#include "selectionSort.h"

void print(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << ' ';
	}
	std::cout << std::endl;
}

int main()
{
	int arr[5] = {3, 4, 1, 2, 5};
	std::cout << "���� �� : ";
	print(arr);

	selectionSort(arr, sizeof(arr)/sizeof(arr[0]));
	std::cout << "���� �� : ";
	print(arr);

	return 0;
}
*/