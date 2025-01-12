#include <iostream>
#include <vector>


using namespace std;


int bSearch(vector<int> arr , int tar){

    int str = 0;
    int end = arr.size()-1;

    while(str <= end){

        // int mid = (str+end)/2 ;
        int mid = str+(end-str)/2 ;
        if(tar < arr[mid]){
            end = mid-1;
        }
        else if(tar>arr[mid]){
            str = mid+1;
        }
        else{
            return mid;
        }
    }

}

int main(){

    vector<int> num = {1,6,9,12,16,17};
    int target = 17;

    int ans;
    ans = bSearch(num,target);

    cout << ans;


}
