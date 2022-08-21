#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Initialzation
    vector<int> a;
    vector<int> b(5, 10);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 3, 7, 10};
    vector<int> e(4);

    //iteration
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<",";
    }
    cout<<endl;

    for(auto it = b.begin(); it!= b.end(); it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    for(auto x:d){
        cout<<x<<",";
    }
    cout<<endl;

    for(auto x:e){
        cout<<x<<",";
    }
    cout<<endl;


    vector<int> v;
    int n=5;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }

    for (int x : v) {
        cout << x << ",";
    }
    cout << endl;

    //Understand at memory level, what are the differences in the two
    cout << v.size() << endl;
    cout << v.capacity() << endl; //size of underlying array
    cout << v.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system


    cout << d.size() << endl;
    cout << d.capacity() << endl; //size of underlying array
    cout << d.max_size() << endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system


    return 0;
}