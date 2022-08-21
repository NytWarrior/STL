// Sorting according to ages ==> get top 3 oldest person
// I/P:                             
// 5                                    O/P:
// A 20                                 C 40
// B 3                                  A 20
// C 40                                 E 15
// D 10
// E 15

#include<iostream>
#include <cstring>
#include <queue>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(){

        }
        Person(string s, int a){
            name = s;
            age = a;
        }
};

class PersonCompare{
    public:
        bool operator()(Person A, Person B){
            return A.age < B.age;           //for the young ones: return A.age > B.age;
        }
}; 

int main(){

    int n;
    cin>>n;

    priority_queue<Person, vector<Person>, PersonCompare> pq;

    for(int i=0; i<n; i++){
        string name;
        int age;
        cin>>name>>age;
        Person p(name, age);
        pq.push(p);

    }

    int k = 3; //for top 3
    for(int i=0; i<3; i++){
        Person p =pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();

    }
    return 0;
}