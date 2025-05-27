#include <iostream>

using namespace std;

// Multiple inheritance is a programming feature that allows a class to inherit properties from more than one parent class
class Student{
public:
    string name;
    int roll;
};

class Teacher{
public:
    string sub;
    int salary;
};

class TA:public Student,public Teacher{

public:
    void getInfo(){
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Roll of Student: "<<roll<<endl;
        cout<<"Subject Teach by Teacher: "<<sub<<endl;
        cout<<"Salary of Teacher: "<<salary<<endl;
    }

};
int main()
{
  TA a1;
  a1.name="Nitish";
  a1.roll=123;
  a1.sub="Science";
  a1.salary=230;
  a1.getInfo();

  

}