#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> d{1, 2, 3, 7, 99};

    //push back O(1), not for when doubling process
    d.push_back(16);

    //Pop bsck/ remove the last element O(1)
    d.pop_back();

    //insert in middle O(N), N = no of elment (added + shifted)
    d.insert(d.begin()+3 ,25);
    d.insert(d.begin() + 4, 4, 100);

    //front and back
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    //erase some elements in middle
    d.erase(d.begin()+2);
    d.erase(d.begin()+3, d.begin()+6);

    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid shrink
    d.resize(8);
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    d.resize(18);       //if the size increase then more memory will be allocated 
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //clear all element
    d.clear();
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    for(auto x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> a;
    vector<int> v;

    //to avoid doubling 
    v.reserve(100);

    for(int i=0; i<9; i++){
        a.push_back(i);
        v.push_back(i);
        cout<<"capacity of a: "<<a.capacity()<<" and v: "<<v.capacity()<<endl;
    }


    return 0;
}