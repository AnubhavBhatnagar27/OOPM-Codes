// Write a program to demonstrate method overloading and overriding by creating a base class Shape and derived classes Circle and Rectangle
#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
    virtual void area() const{
        cout<<"Area of the shape is undefined."<<endl;
    }
    void area(double radius) const{
        cout<<"Area of the circle: "<<3.14159*radius*radius<<endl;
    }
    void area(double length,double width) const{
        cout<<"Area of the Rectangle: "<< length * width <<endl;
    }
};
class Circle:public Shape{
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    void area() const override{
        cout<<"Area of the Circle: "<< 3.14159*radius*radius<<endl;
    }
};
class Rectangle:public Shape{
    private:
    double length,width;
    public:
    Rectangle(double l,double w) : length(l),width(w){}
    void area() const override{
        cout<<"Area of the Rectangle: "<< length * width <<endl;
    }
};
int main(){
    Shape shape;
    shape.area(4.0);
    shape.area(4.0,6.0);
    Circle circle(5.0);
    Rectangle rectangle(4.0,6.0);
    cout<<"Method Overloading -> "<<endl;
    shape.area();
    circle.area();
    rectangle.area();
    return 0;
}