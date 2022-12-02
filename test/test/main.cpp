#include "numericProperty.h"
#include "stringProperty.h"
#include "algorithmProperty.h"
#include "stringstreamProperty.h"
#include <algorithm>
#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> array = { 1, 2, 3, 4, 5 };
	for (int i : array) {
		std::cout << i << ' ';
	}


	return 0;
}