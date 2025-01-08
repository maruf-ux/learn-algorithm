#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    int size = sizeof(a) / sizeof(int);

    cout << "sum of the elements of the array";

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << " = " << sum;

    return 0;
}