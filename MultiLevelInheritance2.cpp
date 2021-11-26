#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Employee
{
    public:
    void details()
    {
        string name;
        string email;
        string address;
        int age;
        int Contact_No;
        int ID;
        cout<<"Employee Details: "<<endl;
        cout<<"-----------------"<<endl;
        cout<<"Enter your Name: "<<endl;
        cin>>name;
        cout<<"Enter your Email: "<<endl;
        cin>>email;
        cout<<"Enter your Address: "<<endl;
        cin>>address;
        cout<<"Enter your Age: "<<endl;
        cin>>age;
        cout<<"Enter your Contact Number: "<<endl;
        cin>>Contact_No;
        cout<<"Enter your ID: "<<endl;
        cin>>ID;
    }
};
class Office : public Employee
{

};
class Work : public Office
{

};
int main()
{
    Work w1;
    w1.details();
    return 0;
}