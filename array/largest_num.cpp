#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int num[5] = {4, 23, 1, 43, 12};

    int largest = INT_MIN;
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }

    cout << "The largest number in the array is: " << largest << "& the index- " << index << endl;

    return 0;
}