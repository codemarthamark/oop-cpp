#include<iostream>
using namespace std;


class English{
    public:
        string sayHello(){
           return "Hello";
        }
};

class Swahili : public English{
    public:
        string sayHello(){
            return "Habari";
        }
};

class French : public English{
    public:
        string sayHello(){
            return "Bonjour";
        }
};

class Ndali : public English{
    public:
        string sayHello(){
            return "Mwaghona";
        }
};

int main(){
    English version1;
    Swahili version2;
    French version3;
    Ndali version4;

    cout<<"English -> "<<version1.sayHello()<<endl;
    cout<<"Swahili -> "<<version2.sayHello()<<endl;
    cout<<"French -> "<<version3.sayHello()<<endl;
    cout<<"Ndali -> "<<version4.sayHello()<<endl;
}