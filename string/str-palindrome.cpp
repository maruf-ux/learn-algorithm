#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isStrPalindrome(string s){

    string revs = s;
    reverse(revs.begin() , revs.end());

    if(s == revs){
        return true;
    }
    else {
        return false;
    }

}


int main(){

    string str = "madam";


    cout << isStrPalindrome(str);

}
