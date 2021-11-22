#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Student{
    public:
    void details()
    {
        string name;
        int age;
        cout<<"Student Details: "<<endl;
        cout<<"----------------"<<endl;
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your age: "<<endl;
        cin>>age;
    }
};
class College : public Student
{

};
class Branch : public College
{

};
int main()
{
    Branch b1;
    b1.details();

    return 0;
}