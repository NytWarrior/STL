/*
Maximum for each and every contigous subarray of size k 

i/p:
n = 9
a[n] = {1 2 3 1 4 5 2 3 6}          ==>     3 3 4 5 5 5 6
k = 3

Brute force method ==>  by taking k element every time  =  O(n*k)
Deque method       ==>  =O(n+k) = O(n)

*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n;
    int a[100000];
    int k;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>k;

    //process first k element separetly
    deque<int> Q(k);
    int i;
    for(i=0; i<k; i++){
        while(!Q.empty() && a[i]>a[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }

    //For the remaining elements
    for( ; i<n; i++){
        cout<<a[Q.front()]<<" ";

        //1. Remove the elements which are not the part of the windows
        while(!Q.empty() && (Q.front()<= i-k)){
            Q.pop_front();
        }

        //2. Remove the elements which are not useful and are in window
        while(!Q.empty() && a[i]>=a[Q.back()]){
            Q.pop_back();
        }

        //3. Add the new element
        Q.push_back(i);

    }
    cout<<a[Q.front()]<<endl;

    return 0;
}