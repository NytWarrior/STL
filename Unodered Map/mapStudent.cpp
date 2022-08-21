#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

class Student{
    public:
        string firstname;
        string lastname;
        string rollno;

        Student(string f, string l, string no){
            firstname=f;
            lastname =l;
            rollno = no;
        }

        bool operator==(const Student &s) const{
            return rollno == s.rollno?true:false;
        }
};

class HashFn{
    public:
        size_t operator()(const Student &s) const{
            return s.firstname.length() + s.lastname.length();
        }
};

int main(){

    unordered_map<Student, int, HashFn> student_map;

    Student s1("Rajeev", "Singh", "1081");
    Student s2("Sanjeev", "Singh", "1061");
    Student s3("Shivam", "Singh", "1072");
    Student s4("Rajeev", "Singh", "1089");

    //add student marks to hashmap
    student_map[s1] = 100;
    student_map[s2] = 60;
    student_map[s3] = 120;
    student_map[s4] = 50;

    //find marks of a student
    cout<<"Marks of 1089: "<<student_map[s3]<<endl;

    //iterate over all the student
    for(auto s:student_map){
        cout<<s.first.firstname<<" "<<s.first.lastname<<" "<<s.first.rollno<<" marks "<<s.second<<endl;
    }



    return 0;
}