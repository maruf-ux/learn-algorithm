#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int main(){

    priority_queue<int> pq1;

    // reverse the order the priorty queue
    priority_queue<int ,vector <int>,greater <int> > pq2;

    pq1.push(5);
    pq1.push(3);
    pq1.push(10);
    pq1.push(4);

    pq2.push(5);
    pq2.push(3);
    pq2.push(10);
    pq2.push(4);

    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }

}
