#include<iostream>
#include<cmath>
using namespace std;



class Circle{
    public:
        double radius;

    public:
        double area(){
            return M_PI * radius * radius;
        }

    public:
        double perimeter(){
            return 2*M_PI*radius;
        }
    public:
        double circumference(){
            return perimeter();
        }

};

class Cylinder : public Circle{
    public:
        double height;

    public:
        double volume(){
            return area()*height;
        }
};


int main() {
    // Inheritance is the process of taking the features of an existing class into a new class

    Cylinder cyl1;
    cyl1.radius = 12;
    cyl1.height = 28;

    cout<<"The volume is : "<<cyl1.volume()<<"\nThe Area is : "<<cyl1.area()<<"\nThe Circumference is : "<<cyl1.circumference()<<endl;

}