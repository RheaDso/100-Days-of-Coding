#include<stdio.h>
#include<iostream>
using namespace std;

class Billing
{
    static int no_of_carts;
    static float amount;

    public:
    Bill()
    {
        cout<<"\nA Cart is Passed.";
        no_of_carts++;
    }
    void display()
    {
        cout<<"\nTotal Number of Cars: "<<no_of_carts;
        cout<<"\nTotal Amount Received = "<<amount;
    }
    void calc_amt(int t)
    {
        if(t=1)
        amount+=40;
    }
};
int Billing :: no_of_carts=0;
float Billing :: amount=0.0;

int main()
{
    int lane_no, type;
    char ch = 'y';
    int lane[6]={0,0,0,0,0,0};
    do
    {
        do
        {
            cout<<"Enter the Lane_No(1-5): ";
            cin>>type;
        }while(type<0 || type>1);

        Billing b;
        switch(lane_no)
        {
            case 1: lane[0]++;
            break;
            case 2: lane[0]++;
            break;
            case 3: lane[0]++;
            break;
            case 4: lane[0]++;
            break;
            case 5: lane[0]++;
            break;
        }
        b.calc_amt(type);
        b.display();
        cout<<"\nAre there any more carts? (y/n): ";
        cin>>ch;
    }
    while(ch=='Y' || ch=='y');
    for(int i=0; i<5; i++)
    {
        cout<<"Enter carts that passed through the lane 1"<<i+1<<"is"<<lane[i]<<endl;
    }
    return 1;
}