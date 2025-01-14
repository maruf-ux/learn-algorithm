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

bool isPalindrome(int num){
    if(revNum(num) == num){
        return true;
    }
    return false;
}

int main(){
    int num1 = 3928;

    cout << num1 << endl;
    cout << revNum(num1) << endl;
    if(isPalindrome(num1)){
        cout << "It is a Palindrome number" ;
    }
    else{
       cout << "Not a Palindrome number";
    }
}
