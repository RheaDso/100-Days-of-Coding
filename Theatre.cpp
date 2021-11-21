#include<iostream>

using namespace std;

class threatre
{
    protected:
    char theatre_name[40];
    int theatre_number;
    int vip_seats;
    int silver_seats;
    int regular_seat;

    public:
    threatre(int th, int vip, int sil, int reg)
    {
        theatre_number = th;
        vip_seats = vip;
        silver_seats = sil;
        regular_seat = reg;
    }
    void total_seats()
    {
        cout<<"\nTheatre Seats: ";
        cout<<"\nTheatre Number: ";
        cout<<theatre_number;
        cout<<"VIP Seats: ";
        cout<<vip_seats;
        cout<<"Silver Seats: ";
        cout<<silver_seats;
        cout<<"Regular Seats: ";
        cout<<regular_seat;
    }
};
class reservation : public threatre
{
    protected:
    int vip_booked;
    int silver_booked;
    int regular_booked;

    public:
    reservation(int vb, int sb, int rb, int a, int b, int c, int d) : threatre(a, b, c, d)
    {
        vip_booked = vb;
        silver_booked = sb;
        regular_booked = rb;
    }
    void booked();
    void cancel(int x, int y);
    void display_status();
};
void reservation :: cancel(int cn, int p)
{
    if(cn==1)
    {
        vip_booked = vip_booked - p;
    }
    else if(cn==2)
    {
        silver_booked = silver_booked - p;
    }
    else if(cn==3)
    {
        regular_booked = regular_booked - p;
    }
}
int main()
{
    int th_no, v, s, r, bv, bs, br;
    float d;

    cout<<"Enter the Theatre Number: ";
    cin>>th_no;
    cout<<"Enter the Total Seats in VIP Class: ";
    cin>>v;
    cout<<"Enter the Total Seats in Silver Class: ";
    cin>>s;
    cout<<"Enter the Total Seats in Regular";
    cin>>r;
}