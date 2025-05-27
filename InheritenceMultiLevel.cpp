#include <iostream>

using namespace std;

// Multi level Inheritence means one class inherit from other class and that class inherit from other parent class
class Student
{
public:
    string name;
    int age;
};

class Gradstudent : public Student
{
public:
    int roll;
};

class PostGradSt : public Gradstudent
{
public:
    string collegeName;

    PostGradSt(string name, int age, int roll, string collegeName)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->collegeName = collegeName;
    }
    void getInfo()
    {
        cout << "Name of Student: " << name << endl;
        cout << "Age of Student: " << age << endl;
        cout << "Roll of Student: " << roll << endl;
        cout << "College Name: " << collegeName << endl;
    }
};

int main()
{
    PostGradSt g1("Nitish", 23, 101, "BBBDITM");
    g1.getInfo();
}