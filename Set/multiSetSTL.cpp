#include <iostream>
#include <set>
using namespace std;

//Multiset --> that can store multiple elements that have same element
//stored in a specific --> sorted according to internal comparison object
//values once inserted can't be modified
//associative container --> elements are refered by their value and not by the index
//underlying dsa --> BST

typedef multiset<int>::iterator It;

class cmp{
    public:
    bool operator()(pair<string, int> p1, pair<string, int> p2){
        return p1.second<p2.second;
    }
};

int main() {

    int arr[] = {10, 20, 30, 20, 10,20,20, 10, 10, 30, 80};
    int n = sizeof(arr)/sizeof(int);
    multiset<int> m(arr, arr+n);

    //erase all 20
    m.erase(20);

    //insert
    m.insert(50);


    //iterate
    for(int x: m){
        cout<<x<<" ";                         //10 10 10 10 30 30 50 80
    }
    cout<<endl;

    //count
    cout<<"count: "<<m.count(10)<<endl;       //count: 4

    //find
    auto it = m.find(30);         //30
    cout<<(*it)<<endl;

    //get all element equal to 30
    pair<It, It> range = m.equal_range(30);

    for(auto it = range.first; it!= range.second; it++){                  //30 30
        cout<<*it<<" ";
    }
    cout<<endl;


    //lower bound >=
    //upper bound >
    for(auto it = m.lower_bound(10); it!= m.upper_bound(77); it++){               //10 10 10 10 30 30 50 
        cout<<*it<<" ";
    }
    cout<<endl;
    
    pair<string, int> p1 = make_pair("B", 100);
    pair<string, int> p2 = make_pair("A", 40);
    pair<string, int> p3 = make_pair("C", 120);
    pair<string, int> p4 = make_pair("D", 10);


    multiset<pair<string, int>> mp1;
    mp1.insert(p1);
    mp1.insert(p2);
    mp1.insert(p3);
    mp1.insert(p4);

    for(auto p: mp1){                   
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    //A -> 40
    //B -> 100
    //C -> 120
    //D -> 10
    

    cout<<endl;
    multiset<pair<string, int>, cmp> mp2;
    mp2.insert(p1);
    mp2.insert(p2);
    mp2.insert(p3);
    mp2.insert(p4);


    for(auto p: mp2){
        cout<<p.first<<" -> "<<p.second<<endl;
    }
    
    //D -> 10
    //A -> 40
    //B -> 100
    //C -> 120
    
    return 0;
}
