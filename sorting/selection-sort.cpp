#include <iostream>
#include <limits.h>

using namespace std;

void selectionSort(int num[] , int n){


    for(int i = 0 ; i< n-1 ; i++){
       int si = i;
       for(int j =i+1; j< n ; j++){
            if(num[j]< num[si]){
                si = j;
            }
       }
       swap(num[i] , num[si]);
    }

}
void printArr(int num[] , int n){

    for(int i = 0 ; i< n ; i++){
       cout << num[i] << " ";
    }

}

int main(){

    int arr[] = {4,1,5,2,3};
    int n = 5;

    selectionSort(arr,n);
    printArr(arr, n);
}
