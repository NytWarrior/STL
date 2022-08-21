//LIFO(LAST IN FIRST OUT)

#include <iostream>

#include <stack>
using namespace std;

int main(){

    stack<int> s;

    for(int i=0; i<=5; i++){
        s.push(i);
    }

    //loop
    while(!s.empty()){
        cout<<s.top()<<", ";               //O(1)
        s.pop();                            //O(1)
    }

    return 0;
}