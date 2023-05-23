#include<iostream>
using namespace std;

class Student{
    public:
        string fname;
        string lname;


    private:
        int age;
        float gpa;
        int id;

    public:
        Student(int std_id,string std_fname,string std_lname){
            id = std_id;
            fname = std_fname;
            lname = std_lname;
        }

    // getters and setters start
    public:
        void setId(int std_id){
            id = std_id;
        }
    public:
        void setAge(int std_age){
            age = std_age;
        }
    public:
        void setGpa(float std_gpa){
            gpa = std_gpa;
        }

    public:
        int getAge(){
            return age;
        }

    public:
        int getGpa(){
            return gpa;
        }

    public:
        int getId(){
            return id;
        }

    // getters and setters end .

    void printInfo(){
        cout<<"ID : "<<getId()<<endl;
        cout<<"Name :"<<fname<<" "<<lname<<endl;
        cout<<"Age : "<<getAge()<<endl;
        cout<<"GPA : "<<getGpa()<<endl;
    }

};

int main(){
    Student std(1,"Martha","Mark");
    std.setGpa(3.5);
    std.setId(23);
    std.setAge(22);
    
    std.printInfo();
}
