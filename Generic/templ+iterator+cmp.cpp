//Template + Iterators + Comparators

#include <iostream>
#include <cstring>
#include <list>
#include <vector>

using namespace std;

template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){

    while(start!= end){
        if(cmp(*start, key)){
            return start;
        }
        start++;
    }
    return end;
}

class Book{
    public:
        string name;
        int price;

        Book(){

        }

        Book(string name, int price){
            this->name = name;
            this->price = price;
        }
};

class BookCompare{
    public:
        bool operator()(Book A, Book B){
            if(A.name == B.name){
                return true;
            }
            return false;
        }
};

int main(){

    Book b1("C++", 100);
    Book b2("Python", 120);
    Book b3("Java", 130);

    //vector<Book> l;
    list<Book> l;             //work for both list and vector also

    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("C++", 110);
    BookCompare cmp;

    //list<Book>::iterator it = search(l.begin(), l.end(), booktofind, cmp);

    auto it = search(l.begin(), l.end(), booktofind, cmp);

    if(it!=l.end()){
        cout<<"Book found in the library."<<endl;

    }
    else{
        cout<<"Not found"<<endl;
    }


    return 0;
}

