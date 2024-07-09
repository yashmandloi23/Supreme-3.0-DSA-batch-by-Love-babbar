#include <iostream>
using namespace std;

class Student
{
public:
    // attributes of class
    int age;
    string name;
    int id;
    int nos;
    // default constructer
    Student()
    {
        cout << "default constructer " << endl;
    }
    // parameteries constructer 
    Student(int id, int age, string name, int nos)
    {
        cout << "parameterised constructer " << endl;
    }
    // copy constructer
    Student(const Student &srcobj)   // scrobj signifies a 
    {
        cout << "copy constructer " << endl;
    }
    // behaviour aur function
    void study()
    {
        cout << this->name << "study";
    }
    void sleep()
    {
        cout << this->name << "student sleeps ";
    }
    void bunk()
    {
        cout << this->name << "student can bunk ";
    }
    // default distructer ~ sigh is used to make distructer
    ~Student()
    {
        cout << "default distructer " << endl;
    }
};

int main()
{
    // Student A;
    // A.name = "abhi";
    // A.age = 20; 
    // A.nos = 4; 
    // A.id = 10;   // non optimal way to right code for object 
    
    Student A(1,20,"abhi",6); // optimal way to right code with parametrised code 
    // cout <<  <<endl;


    return 0;
}