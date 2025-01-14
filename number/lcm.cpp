#include <iostream>

using namespace std;

int gcd(int a , int b){

    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }
        else{
            b = b%a;
        }
    }

return a==0 ? b : a;

}

int lcm(int a , int b){

    int gcdFunc = gcd(a,b);
    int lcm = (a*b) / gcdFunc;

    return lcm;

}


int main(){

    int a = 20 , b= 28;

    cout << lcm(a,b);

}
