#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr, arr+2, arr+n);

    print(arr, n); 

    swap(arr[0], arr[1]);       //swap first two element
    print(arr, n);

    reverse(arr, arr+4);        //Reverse the first 4 element
    print(arr, n);

    next_permutation(arr, arr+n);       //next permutation
    print(arr, n);

    cout<<"Max of first two element: "<<max(arr[0], arr[1])<<endl;
    cout<<"Min of first two element: "<<min(arr[0], arr[1])<<endl;

    //apply it on vector

    vector<int> v{1, 2, 3, 4, 5, 6};
    rotate(v.begin(), v.begin()+3, v.end());

    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 

    next_permutation(v.begin(), v.end());       //next permutation

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}