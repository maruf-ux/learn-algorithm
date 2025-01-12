#include <iostream>
#include <vector>


using namespace std;


int search(vector<int>& nums, int target) {
        int str = 0;
        int end = nums.size()-1;

        while(str<=end){
            int mid = str + (end-str)/2;
            if(target == nums[mid]){
                return mid;
            }
             if (nums[str] <= nums[mid] ){
                if(nums[str] <= target && target <= nums[mid]){
                    end = mid-1;
                }
                else{
                    str = mid+1;
                }
             }

             else{
                if(nums[mid]<= target && target <= nums[end]){
                    str = mid +1 ;
                }
                else{
                    end = mid-1;
                }
             }
        }
        return -1;
    }


int main(){

    vector<int> num1 = {3,4,5,6,7,0,1,2};

    int tar = 2;

    int ans = search(num1,tar);

    cout << ans;


}
