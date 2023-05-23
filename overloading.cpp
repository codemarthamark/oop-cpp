#include<iostream>
#include<cmath>
using namespace std;

class Shape {
    public:
        int length,breadth,radius;

    // Here we have to create area functions for rectangle and circle having the same function name
    // For the rectangle
    public:
        float area(float length, float breadth){
            return length*breadth;
        }
    // For the circle
    public:
        float area(float radius){
            return (float)(M_PI * radius*radius);
        }
};

int main(){
    Shape rectangle;
    rectangle.length = 12;
    rectangle.breadth = 15;
    cout<<"Area of Rectangle : "<<rectangle.area(rectangle.length,rectangle.breadth)<<endl;

    Shape circle;
    circle.radius = 14.14;
    cout<<"Area of Cirlcle : "<<circle.area(circle.radius)<<endl;
}