#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main(){

    multimap<char,string> m;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    /*  7 
        b batman
        a apple
        b boat
        a angry
        c cat
        d dog
        e elephant
    */


    auto it = m.begin();
    cout<<it->first<<"-->"<<it->second<<endl;       //a-->apple
    m.erase(it);

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    /*
    a angry
    b batman
    b boat
    c cat
    d dog
    e elephant
*/

    auto it2 = m.lower_bound('b');
    auto it3 = m.upper_bound('d');

    for(auto itr = it2; itr!=it3; itr++){
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }

/*  
    b-->batman
    b-->boat
    c-->cat
    d-->dog
*/

    return 0;
}