#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){

    unordered_map<string, vector<string> > phonebook;

    phonebook["Rajeev"].push_back("9935");
    phonebook["Rajeev"].push_back("89177");
    
    phonebook["Sanjeev"].push_back("914042");
    phonebook["Sanjeev"].push_back("96820654643169");

    phonebook["Home"].push_back("9616");
    phonebook["Home"].push_back("6546531674");
    phonebook["Home"].push_back("65674646467");

    for(auto p:phonebook){
        cout<<"Name: "<<p.first<<" -> ";
        for(string s:p.second){
            cout<<s<<",";
        }
        cout<<endl;
    }

    string name;
    cin>>name;

    if(phonebook.count(name)==0){
        cout<<"Absent";
    }
    else{
        for(string s:phonebook[name]){
            cout<<s<<endl;
        }
    }

    return 0;
}