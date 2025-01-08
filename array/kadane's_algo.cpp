#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {2, -3, 2, 7, 4, -3};
    int sum = 0;
    int maxSum = INT_MIN;


    for (int i = 0; i < n; i++)

    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxSum << endl;

    return 0;
}