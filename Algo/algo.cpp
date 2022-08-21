#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int arr[] = {1, 2, 5, 10, 10, 10, 15, 20, 30};
    int n = sizeof(arr)/sizeof(int);

    //search ==> find
    int key;
    cin>>key;

    auto it = find(arr, arr+n, key);   // linear search
    int indx = it - arr;

    if(indx == n){
        cout<<"Not present"<<endl;
    }
    else{
        cout<<"Present at index: "<<indx<<endl;
    }

    //binary search ==> sorted array needed

    bool present = binary_search(arr, arr+n, key);

    if(present){
        cout<<"Preseent"<<endl;
    }
    else{
        cout<<"NOT Present"<<endl;
    }

    //lower_bound(s, e, key) and upper_bound(s, e, key) ==> binary search

    auto lb = lower_bound(arr, arr+n, key);     //>=key
    cout<<"Lower bound of "<<key<<": "<<(lb - arr)<<endl;

    auto ub = upper_bound(arr, arr+n, key);         //give index of number just greater than the key
    cout<<"Upper bound of "<<key<<": "<<(ub - arr)<<endl;

    cout<<"Number of occ of "<<key<<": "<<(ub - lb)<<endl;

    return 0;
}