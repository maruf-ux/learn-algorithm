#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isFreqSame(int freq1[], int freq2[]){

    for(int i=0; i<26 ; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }

    return true;

}

bool checkInclusion(string s1, string s2){

int freq[26] = {0};
    for(int i=0 ; i<s1.length() ; i++){
        int idx = s1[i] - 'a';
        freq[idx]++ ;
    }
    int windsize = s1.length();

    for(int i = 0 ; i<s2.length(); i++){
        int windidx = 0 , idx = i;
        int windfreq[26] = {0};

        while(windidx < windsize && idx < s2.length()){
            windfreq[s2[idx] - 'a']++;
            windidx++;
            idx++;
        }

        if(isFreqSame(freq,windfreq)){
            return true;
        }

    }

    return false;
}

int main(){
    string s1 = "lll";
    string s2 = "ullalllaa";

   cout << checkInclusion(s1,s2);
}
