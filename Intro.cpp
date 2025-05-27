#include <iostream>
// #include <string>
using namespace std;

class Hero
{
private:
    // string bank;
    int account_no;
    int pass;

public:
    string fname;
    int age;
    char level;

    void setAccount_no(int no)
    {
        account_no = no;
    }
    void setPass(int password)
    {
        pass = password;
    }
    int getAccount_no(int pass)
    {
        if (pass == 123)
            return account_no;
        else
        {
            cout << "worng passowrd" << endl;

            return 0;
        }
    }

    int getPass()
    {
        return pass;
    }
};

class car
{
public:
    string name;
};

int main()
{
    // initialization of object
    Hero Manoj;
    car Tata;
    Tata.name = "Nexon";
    // size of empty class is 1;
    cout << "size of empty oject " << sizeof(Tata) << endl;
    // access the peroperty  by . operator

    Manoj.fname = "Ashok Maurya";
    Manoj.age = 24;
    Manoj.level = 'S';

    cout << "Manoj Father name: " << Manoj.fname << endl
         << "Manoj age: " << Manoj.age << endl
         << "Manoj Level: " << Manoj.level << endl;

    Manoj.setPass(9552);
    cout << "Manoj Password " << Manoj.getPass() << endl;
    int pass = Manoj.getPass();
    Manoj.setAccount_no(123345);
    cout << "Manoj acc no " << Manoj.getAccount_no(1243) << endl;

    // Dynamic memory allocation using pointer
    Hero *a = new Hero;
    // we can not access by b.age because b is address we have to pass actual para by (*a).age;
    (*a).age = 34;
    cout << "age of a is " << (*a).age << endl;

    // anothe method of access of this by arrow a->age

    a->fname = "Ramesh Maurya";
    cout << "Fathe name of a is " << a->fname << endl;
}