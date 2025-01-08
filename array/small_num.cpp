#include <iostream>
#include <limits.h>

using namespace std;


int main()
{

    int arr[5] = {12, 4, 1, 2, 31};

    int smallest =  INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];  // smallest = min(arr[i], smallest)
        }
    }

    cout << "Smallest number: " << smallest << endl;

    return 0;
}