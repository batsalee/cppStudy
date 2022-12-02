/*
Heap Sort(�� ����)

- �ð����⵵ : O(nlogn), �ð����⵵�� ���� ���̸� �޸� ����� �ʿ���ٴ� ������ ���� ������ ������ ���� ��
  			   �� ������ ���� ������ ���� ��ü �ڷḦ �����ϴ°� �ƴ϶� ���� ū(����) �� ��� �ʿ��� ��

- ���� : ���� ��(heap)�� ���� �˾ƾ� ��
  1) heap�� ����
    ���̶� ��������Ʈ�� ���·� ������� �ڷᱸ���̸�, ���𰡸� �������� �׾ƿø� ���̶�� ��
	�Ϲ������� ���̶�� �ϸ� �ִ� ���� �ǹ���
	�ִ� ��(max heap) : ��������Ʈ���̸鼭 (�θ���>�ڽĳ��)
	�ּ� ��(min heap) : ��������Ʈ���̸鼭 (�θ���<�ڽĳ��)

  2) ���� ���� : �ִ� Ȥ�� �ּڰ��� ������ ã�Ƴ��⿡ ������ �ڷᱸ��

  3) ���� ����� ��
	�� ���� -> �� ������ ���� -> �� ���� -> �� ������ ���� -> ... �ݺ�
	4 1 5 2 3 ���� �迭�� �ִٸ� ���� 4�� �θ��� �ڸ��� ����,
	�� �� 1�� �ڽĳ�� �ڸ��� ��, �� �� �ڽĳ�尡 �θ��庸�� ũ�� ������ Ȯ���ϰ�
	ũ�� ������ ���� �ε����� �Ѿ��, �� ũ�ٸ� �θ���� swap ����, �̰� �ݺ�
	�ڽĳ�尣�� ũ��� ������ ����

  4) heap ������ ����
	�������� ������ ���ؼ��� �ִ����� ����, �������� ������ ���ؼ��� �ּ����� ����
	�� �ڷᱸ���� �̿��� ��������Ʈ���� ����� �ִ밪, Ȥ�� �ִ밪�� ���� �� ����
	�� �ִ밪, Ȥ�� �ּҰ��� �����ϰ� �������� �� �����ؼ� ���� �ִ밪, �ּҰ��� ���ϴ� ��

- ����
  ������ ��ҵ�� ��������Ʈ�����¸� ����
  ���� �������� �����̶�� �ִ������� �����ؼ� ���� �� ��忡 �ִ밪�� �ö�
  �׷� �� �ִ밪�� ���� ������ node�� ���� swap����
  �� ���� �� ���� ������ 0~N-1 ������ ���ָ� ���� ū ���� ���� ������ �ڸ����� �������� �ʰ� ��
  �� ���� ������ �Ǹ� �� ������-1��° node�� swap���ְ� 0~N-2������ ���� �ݺ�
*/

#include "heapSort.h"

void swap(int* val1, int* val2) {
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

void heapify(int arr[], int len, int parent) {
    int largest = parent;
    int left = 2 * parent + 1;
    int right = 2 * parent + 2;

    if (left < len && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < len && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != parent) {

        swap(&arr[parent], &arr[largest]);

        heapify(arr, len, largest);
    }
}

void heapSort(int arr[], int len) {

    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(arr, len, i);
    }

    for (int i = len - 1; i >= 0; i--) {

        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}


/* test case
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

int main() {
    int arr[5] = { 3, 4, 1, 2, 5 };

    std::cout << "���� �� : ";
    print(arr);

    heapSort(arr, sizeof(arr) / sizeof(arr[0]));

    std::cout << "���� �� : ";
    print(arr);

    return 0;
}
*/