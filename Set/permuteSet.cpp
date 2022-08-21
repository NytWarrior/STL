/*

aab ==> aab, aba, aab, aba, baa, baa
abc ==> abc, acb, bac, bca, cba, cab

#include <iostream>
using namespace std;

void permute(char a[], int i){
    if(a[i]== '\0'){
        cout<<a<<endl;
        return;
    }
    //recursive case
    for(int j=i; a[j]!='\0'; j++){
        swap(a[i], a[j]);
        permute(a,i+1);
        swap(a[i], a[j]);
    }
}

int main(){

    char a[100];
    cin>>a;
    permute(a,0);
    return 0;
}

*/

#include <iostream>
#include <set>
#include <string>
using namespace std;

void permute(char a[], int i, set<string> &s){
    if(a[i]== '\0'){
        //cout<<a<<endl;
        string t(a); 
        s.insert(t);
        return;
    }
    //recursive case
    for(int j=i; a[j]!='\0'; j++){
        swap(a[i], a[j]);
        permute(a,i+1, s);
        swap(a[i], a[j]);
    }
}

int main(){

    char a[100];
    cin>>a;

    set<string> s;
    permute(a,0, s);

    for(auto str:s){
        cout<<str<<", ";
    }
    cout<<endl;
    return 0;
}

//aab ==> aab, aba, baa, 
//abc ==> abc, acb, bac, bca, cab, cba, 