#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int age;


    Student(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Gradstudent: public Student{
public:
    int roll;

    // calling custom constructor from student class
    Gradstudent(string name,int age,int roll):Student(name,age){
       
        this->roll=roll;
    }

        // calling default constructor from Student class
    // Gradstudent(string name,int age,int roll){
    //     this->name=name;
    //     this->age=age;
    //     this->roll=roll;
    // }

    void getInfo(){
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Age of Student: "<<age<<endl;
        cout<<"Roll of Student: "<<roll<<endl;
    }
};


int main(){
    Gradstudent g1("Nitish",23,101);
    g1.getInfo();
}