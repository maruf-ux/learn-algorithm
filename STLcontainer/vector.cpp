#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec1 ;
    vector<int> vec2(3,-1) ;
    vector<int> vec3 ={9,4,2,1};

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    for(int i:vec1){
        cout << i << " " ;
    }

        cout  << endl;

    for(int i:vec2){
        cout << i << " " ;
    }

        cout  << endl;

    for(int i:vec3){
        cout << i << " ";
    }

return 0;
}
