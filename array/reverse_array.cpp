#include <iostream>

using namespace std;

void reverse_ar(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    reverse_ar(arr, 5);

    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}