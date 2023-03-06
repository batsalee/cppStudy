#include <iostream>
#include <vector>

int main() 
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	std::cout << sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );	

	return 0;
}