#include <iostream>
#include <limits.h>

using namespace std;

void bubbleSort(int num[] , int n){

    for(int i = 0 ; i< n-1 ; i++){
        for(int j = 0 ; j< n-i-1 ; j++){
            if(num[j] > num[j+1]){
                swap(num[j], num[j+1]);
            }
        }
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

    bubbleSort(arr,n);
    printArr(arr, n);
}
