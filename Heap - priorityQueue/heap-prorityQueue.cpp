//  Push   ==>  O(Log N)
//  Pop    ==>  O(Log N)
//  Top    ==>  O(1)

#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue<int> pq;     //max heap

//  priority_queue<int, vector<int>, greater<int> >pq;  //min priority queue


    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        pq.push(num);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}