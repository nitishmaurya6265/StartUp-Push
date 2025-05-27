#include <iostream>
#include <string>

using namespace std;

class Teacher{
public:
    string name;
    string Dept;
    int *saly;
    string sub;

    // Thre type of constructor

    // 1. without parameter constructor
    Teacher(){
        cout<<"Consturctor called"<<endl;
    }

    // 2. With parameter constructor
    Teacher(string name,string Dept,int saly,string sub){
        this->name=name;
        this->Dept=Dept;
        this->saly=new int;
        *(this->saly)=saly;
        this->sub=sub;
    }
    
    // creating a constructor to copy object 
    Teacher(Teacher&obj){
        this->name=obj.name;
        this->Dept=obj.Dept;
        this->saly=new int;
        *(this->saly)=*obj.saly;
        this->sub=obj.sub;

    }

    ~Teacher(){
        cout<<"hi i deleted every thing"<<endl;
        delete saly;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<Dept<<endl;
        cout<<"Salary: "<<*saly<<endl;
        cout<<"Subject: "<<sub<<endl;
    }

};



int main(){
    Teacher N1("Manoj","ComputerScience",4500,"c++");
    N1.getInfo();
    // N1.name="Manoj";
    // N1.Dept="ComputerScience";
    // N1.saly=4500;
    // N1.sub="c++";

   

    // creating a default copy constructor
    // Teacher n2(N1);
    // n2.name="Akash Maurya";
    // n2.getInfo();

    // creating a copy of object using custom constructor 
    Teacher N3(N1);
    *(N3.saly)=3000;
    // N1.getInfo();

    


  

}