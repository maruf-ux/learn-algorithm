#include <iostream>
#include <vector>

using namespace std;

//  binarySearchMountainArray

 int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Move to the right half if we're still climbing
                left = mid + 1;
            } else {
                // Move to the left half if we're descending
                right = mid;
            }
        }
        return left; // 'left' or 'right' will point to the peak index
    }

int main() {
    vector<int> num = {0, 3, 8, 9, 5, 2};
    int ans = peakIndexInMountainArray(num);
    cout << ans ;
    return 0;
}




