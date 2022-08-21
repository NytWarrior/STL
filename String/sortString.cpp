#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b){

    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}

int main(){

    int n;
    cin>>n;

    string s[100];

    cin.get();  //just to get rid of extra enter

    for(int i=0; i<n; i++){
        getline(cin, s[i]);
    }

    sort(s, s+n);       //lexi

    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }

    cout<<endl;

    sort(s, s+n, compare); //to have according to length

    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }
    return 0;
}