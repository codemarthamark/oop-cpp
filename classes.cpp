#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string fname;
    string lname;

    Student(int std_id,string std_fname,string std_lname){
         id = std_id;
         fname = std_fname;
         lname = std_lname;
        //  age = std_age;
    }

    void printInfo(){
        cout<<"ID : "<<id<<endl;
        cout<<"Name :"<<fname<<" "<<lname<<endl;
        // cout<<"Age : "<<age<<endl;
    }

};

int main(){
    Student std1(1,"Martha","Mark");
    // Student std2 = new Student(2,"","",5);
    std1.printInfo();
}
