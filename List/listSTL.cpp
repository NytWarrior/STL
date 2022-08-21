#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> l;

    //Init
    list<int> l1{1, 2, 5, 7, 8};

    list<string> l2{"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");                                  //apple --> guava --> mango --> banana --> pineapple

    //sort
    l2.sort();                                                  //apple --> banana --> guava --> mango --> pineapple

    //reverse
    l2.reverse();                               //pineapple --> mango --> guava --> banana --> apple

    
    //pop_front
    cout<<l2.front()<<endl;                     //pineapple
    l2.pop_front();                             //l2==> mango --> guava --> banana --> apple


    //add to front
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;                      //apple
    l2.pop_back();                              //l2==> kiwi --> mango --> guava --> banana

    //iterate over the list
    for(auto it = l2.begin(); it!=l2.end(); it++){      
        cout<<(*it)<<"  ==> ";                          //kiwi  ==> mango  ==> guava  ==> banana  ==>
    }
    cout<<endl;

    l2.push_back("guava");                              //l2==> kiwi --> mango --> guava --> banana --> guava -->


    //remove a fruit(all occurence)
    string s = "guava";
    l2.remove(s);                                       //l2==> kiwi --> mango --> banana

    //erase one or more elements
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);

    for(string s:l2){
        cout<<s<<" --> ";                       //l2==> kiwi --> mango -->
    }
    cout<<endl;

    //insert element
    it = l2.begin();
    it++;
    l2.insert(it, "Fruitjuice");

    for(string s:l2){
        cout<<s<<" --> ";                       //l2==>kiwi --> Fruitjuice --> mango -->
    }
    cout<<endl;

    return 0;
}