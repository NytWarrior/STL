//Finding k largest elements in a running stream print the required result when -1 encountered.

// I/P:   1 2 3 4 -1 5 9 10 -1 12 15 8 6 -1
//                                                 ==>   O(Nlog(K))
//O/P:
// 2,3,4,
// 5,9,10,
// 10,12,15,


#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;


//copy of original min heap is used
void print(priority_queue<int, vector<int>, greater<int>> pq){
    while(!pq.empty()){
        cout<<pq.top()<<",";
        pq.pop();
    }
    cout<<endl;
}

int main(){

    int n;
    priority_queue<int, vector<int>, greater<int>> pq;

    int cnt =0;
    int k =3;   //let k=3
    
    while(scanf("%d", &n)!=EOF){
        if(n==-1){
            print(pq);
        }
        else if(cnt<k){
            pq.push(n);
            cnt++;
        }
        else{
            if(n>pq.top()){
                pq.pop();
                pq.push(n);
            }
        }
    }
    return 0;

}