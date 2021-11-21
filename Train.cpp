#include<iostream>

using namespace std;

class Train
{
    protected:
    char Train_Name[40];
    int Train_Number;
    int FirstClass_Seats;
    int SecondClass_Seats;
    int ThirdClass_Seats;

    public:
    Train(int tr, int fc, int sc, int tc)
    {
        Train_Number = tr;
        FirstClass_Seats = fc;
        SecondClass_Seats = sc;
        ThirdClass_Seats = tc;
    }
    void Total_Seats()
    {
        cout<<"\nTrain Seats:";
        cout<<"\nTrain Number: ";
        cout<<"\n "<<Train_Number;
        cout<<"\nFirst Class: ";
        cout<<"\n "<<FirstClass_Seats;
        cout<<"\nSecond Class: ";
        cout<<"\n "<<SecondClass_Seats;
        cout<<"\nThird Class: ";
        cout<<"\n "<<ThirdClass_Seats;
    }
};
class Reservation : public Train
{
    protected:
    int First_Booked;
    int Second_Booked;
    int Third_Booked;

    public:
    Reservation(int fb, int sb, int tb, int a, int b, int c, int d) : Train(a, b, c, d)
    {
        First_Booked = fb;
        Second_Booked = sb;
        Third_Booked = tb;
    }
    void Booked();
    void Cancel(int x, int y);
    void DisplayStatus();
};
void Reservation  :: Cancel(int cn, int p)
{
    if(cn==1)
    {
        First_Booked = First_Booked - p;
    }
    else if(cn==2)
    {
        Second_Booked = Second_Booked - p;
    }
    else if(cn==3)
    {
        Third_Booked = Third_Booked - p;
    }
}
void Reservation :: DisplayStatus()
{
    cout<<"\nThe Available Seats are: ";
    cout<<"\nTrain Number    First Class   Second Class   Third Class ";
    cout<<"\nBooked Seats:";
    cout<<"Train No   First Class   Second Class   Third Class";
    cout<<"\n"<<Train_Number<<"\t\t"<<First_Booked<<"\t\t"<<Second_Booked<<"\t\t"<<Third_Booked;
}
int main()
{
    int tr_no, f, s, t, bf, bs, bt, cl, seats;
    float d;

    cout<<"Enter the Train Number: ";
    cin>>tr_no;
    cout<<"\nEnter the Total seats in First Class: ";
    cin>>f;
    cout<<"\nEnter the Total seats in Second Class: ";
    cin>>s;
    cout<<"\nEnter the Total seats in Third Class: ";
    cin>>t;

    
}
