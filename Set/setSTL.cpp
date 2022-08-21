#include <iostream>
#include <set>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {10, 20, 11, 9, 8,11, 20, 1};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    s.erase(10);

    auto it = s.find(9);
    s.erase(it);

    for(set<int>::iterator it = s.begin(); it!=s.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    set <pair<int, int>>st;
    st.insert(make_pair(10, 5));
    st.insert(make_pair(10, 1));
    st.insert(make_pair(20, 1));
    st.insert(make_pair(20, 100));
    st.insert(make_pair(5, 1));
    st.insert(make_pair(6, 3));
    st.insert(make_pair(5, 3));

    st.erase(make_pair(6,3));
    st.erase(st.find(make_pair(5,3)));
    st.insert(make_pair(5, 4));

    auto it1 = st.lower_bound(make_pair(20, 1));            //lower_bound >=
    auto it2 = st.upper_bound(make_pair(20, 1));            //upper_bound >

    cout<<it1->first<<"==>"<<it1->second<<endl;
    cout<<it2->first<<"==>"<<it2->second<<endl;
    
    // auto it3 = st.upper_bound(make_pair(20, INT_MAX));
    // cout<<it3->first<<"==>"<<it3->second<<endl;

    for(auto p:st){
        cout<<p.first<<"->"<<p.second<<endl;
    }

    return 0;
}