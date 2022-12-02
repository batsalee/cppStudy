/*
Merge Sort(���� ����)(=�պ� ����)

- �ð����⵵ : O(nlogn), �� ���İ� �ٸ��� �־��� ��쿡�� O(nlogn)�� ����
   			   �������� �ð����⵵�� �þ�� ������ ���Ī���� ���� �� �� �ֱ� �����ε�
			   ���������� ������ 1�� ������ ���ҵǴ� O(nlogn) ����
			   ������ �޸𸮸� �� ���� ����ϰ� �� �������� "���������" �����ĺ��� ���� ����

- ���� : ���������� ������ �̸� ���� �����Ҷ� ������ �Ǳ� ����
         ���� �迭�� ���ݾ� ����
		 ������ �迭�� �� ���� ���ݾ� ����
		 �̷��� �Ǽ� 1���� �������� �ٽ� ��ġ�� ������
		 �̶� ��ĥ�� �ΰ��� ���ؼ� �����ؼ� ��ħ
		 �� ��ĥ�� ���ؼ� �����ϰ� ��ħ
		 �ݺ��ϸ� �� �������� ���� ��

- ���� : �� �񱳸� ���ϰ� �ϱ� ���� �迭 ���� �� ���
		 1���� ��� �и� �� �� ���ϸ鼭 ����� �迭�� ä������
		 �������� �������� ������ ���� ä�� ����
*/

#include "mergeSort.h"

int result[5];

void mergeSort(int arr[], int start, int end)
{
	partition(arr, start, end);
}

// ����
void partition(int arr[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		partition(arr, left, mid);
		partition(arr, mid + 1, right);
		merge(arr, left, right);
	}
}

// ����
void merge(int arr[], int left, int right)
{
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
			result[k++] = arr[i++];
		else
			result[k++] = arr[j++];
	}

	int tmp = i > mid ? j : i;

	while (k <= right) result[k++] = arr[tmp++];

	for (int i = left; i <= right; i++) arr[i] = result[i];
}

/* test case
#include <iostream>
#include "mergeSort.h"

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

	mergeSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	std::cout << "���� �� : ";
	print(arr);

	return 0;
}
*/