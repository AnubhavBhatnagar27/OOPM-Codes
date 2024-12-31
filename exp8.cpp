// Create a program to demonstrate the use of virtual functions and friend functions in C++. Use a class hierarchy related to animals to show polymorphism.
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound() const
    {
        cout << "Some generic animal sound." << endl;
    }
    virtual ~Animal()
    {
        cout << "Animal destructor called." << endl;
    }

    friend void animalInfo(const Animal &animal);
};
class Dog : public Animal
{
private:
    double radius;
public:
    Dog(double r) : radius(r) {}

    void sound() const override
    {
        cout << "Bark!" << endl;
    }
    ~Dog()
    {
        cout << "Dog destructor called." << endl;
    }
};
class Cat : public Animal
{
private:
    double length, width;
public:
    Cat(double l, double w) : length(l), width(w) {}
    void sound() const override
    {
        cout << "Meow!" << endl;
    }
    ~Cat()
    {
        cout << "Cat destructor called." << endl;
    }
};
void animalInfo(const Animal &animal)
{
    cout << "Animal info (via friend function): ";
    animal.sound();
}
int main()
{
    Dog dog(5.0);
    Cat cat(4.0, 6.0);
    cout << "Dog makes sound: ";
    dog.sound();
    cout << "Cat makes sound: ";
    cat.sound();
    Animal *animalPtr = &dog;
    cout << "Animal pointer (to Dog) makes sound: ";
    animalPtr->sound();
    animalPtr = &cat;
    cout << "Animal pointer (to Cat) makes sound: ";
    animalPtr->sound();
    cout << "\nUsing friend function:" << endl;
    animalInfo(dog);
    animalInfo(cat);
    return 0;
}
