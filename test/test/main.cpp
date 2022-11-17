#include <vector>
#include <iostream>

using namespace std;

void main()
{
    int n = 3;
    int array[3][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = (i > j) ? i + 1 : j + 1;
        }
    }

    // 출력파트
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j]<< ' ';
        }
        cout << endl;
    }

    int* array_ptr = &(array[0][0]);
    cout << endl << *(array_ptr+5);
}