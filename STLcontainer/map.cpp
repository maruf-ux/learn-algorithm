#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;


int main(){

    map<string , int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 100;

    m.emplace("camera" , 25);

    unordered_map<string , int> um;

    um["playstaion"] = 100;
    um["xbox"] = 100;
    um["headphone"] = 100;



    // pair ( KEY , VALUE)
    for(auto i: m){

        cout << i.first << " " << i.second  << endl;
    }

     // pair ( KEY , VALUE)
    for(auto i: um){

        cout << i.first << " " << i.second  << endl;
    }

    if(m.find("tv") != m.end()){
        cout << "found the item";
    }else{
        cout << "not found ";
    }
}
