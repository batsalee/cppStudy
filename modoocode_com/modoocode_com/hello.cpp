#include <iostream>

int main()
{
	int* num = new int[10];
	
	for (int i=0; i<10; i++)
	{
		num[i] = i;
		std::cout << num[i];
	}
	
	delete[] num;

	return 0;
}