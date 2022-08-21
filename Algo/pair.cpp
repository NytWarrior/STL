#include <iostream>
using namespace std;

int main(){
    
    pair<int, char> p;
    p.first = 10;
    p.second = 'B';

    //another way
    pair<int, char> p2(p);
    cout<<p2.first<<" "<<p2.second<<endl;

    int a, b;
    cin>>a>>b;

    pair<int, int> p4 = make_pair(a, b);
    cout<<p4.first<<" "<<p4.second<<endl;

    pair<pair<int, int>, string> car;
    car.second = "Audi";
    car.first.first = 10;
    car.first.second = 20;

    cout<<car.second<<" ==> "<<car.first.first<<endl;
    cout<<car.second<<" ==> "<<car.first.second<<endl;


    return 0;
}