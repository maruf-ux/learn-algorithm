#include <iostream>
#include <limits.h>

using namespace std;

void swapMinMax(int arr[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    int minAdd = 0;
    int maxAdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minAdd = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxAdd = i;
        }
    }

    // Swap the min and max values
    int temp = arr[minAdd];
    arr[minAdd] = arr[maxAdd];
    arr[maxAdd] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 11, 3, 5, 6, 7};
    swapMinMax(arr, 6);

    return 0;
}
