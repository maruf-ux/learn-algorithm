#include <iostream>


using namespace std;

bool armstrongNum(int n){

    int num = n;
    int reminder;
    int took=0;

    while(num != 0){
        reminder = num%10;
        took += (reminder * reminder * reminder);
        num /= 10;
    }

    cout << took << endl;

    if(n == took){
        return true;
    }

return false;
}

int main(){

    int num1 = 222;

    cout << armstrongNum(num1);


}
