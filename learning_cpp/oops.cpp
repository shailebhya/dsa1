// constructor - general, parameterised, copy
// destructor
// getters
// setters
// operator overloading
//inheritance
//polymorphism
#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    int age;
    int roll;

    void getName()
    {
        cout << name;
    }
    void setName(string a)
    {
        name = a;
    }
    ~Student()
    {
        cout << "destructor has been invoked" << endl;
    }
    Student()
    {
        cout << "default consturctor" << endl;
    }
    Student(string s, int a, int g)
    {
        cout << "parameterised constructor" << endl;
        name = s;
        age = a;
        roll = g;
    }
    void printInfo()
    {
        cout << name << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
        cout << endl;
    }


//operator overloading
    bool operator==(Student &a)
    {
        if (a.name == name && a.age == age && a.roll == roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Student babu;
    babu.age = 1;
    babu.setName("sharma");
    babu.roll = 12;
    babu.printInfo();

    Student sham("hello", 12, 2);
    sham.printInfo();
    if (babu == sham)
    {
        cout << "they are same" << endl;
    }
    else
    {
        cout << "nahin" << endl;
    }
    return 0;
}