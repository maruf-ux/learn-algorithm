#include<iostream>

using namespace std;

int revNum(int n){

    int num = n;
    int ans= 0;

    while(num != 0){
        int reminder = num % 10;
        ans = ans*10 + reminder;
        num /= 10;
    }
return ans;
}

int main(){
    int num1 = 3928;

    cout << revNum(num1);
}
