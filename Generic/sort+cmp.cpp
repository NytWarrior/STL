#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool compare(int a, int b){
    return a>b;
}

void bubble_sort(int arr[], int n, bool (&cmp)(int a, int b)){

    for(int i=1; i< n; i++){
        for(int j=0; j<n-i; j++){
            if(cmp(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){

    int arr[] = {1, 2, 3, 8, 4, 10, 30, 21, 5, 12};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n);  //ascending order
    print(arr, n);

    sort(arr, arr+n, compare);  //decending order
    print(arr, n);

    bubble_sort(arr, n, compare);
    print(arr, n);

    return 0;
}