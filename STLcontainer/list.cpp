#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> list1 ;


    list1.push_back(1);
    list1.push_back(2);
    list1.push_front(3);
    list1.push_back(4);
    list1.push_front(5);

    for(int i:list1){
        cout << i << " " ;
    }


return 0;
}
