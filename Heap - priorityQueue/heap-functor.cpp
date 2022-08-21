//Fucional object  ==>  Functor

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

class Fun{
    public:
        void operator()(){
            cout<<"Having fun inside operator() Fn!"<<endl;
        }
};

class FunStr{
    public:
        void operator()(string s){
            cout<<"Having fun with "<<s<<endl;
        }
};
int main(){

   Fun f; //constructor
   f();  //overload() operator = function call where f is an object

    FunStr fs;
    fs("c++");

    return 0;
}