#include <iostream>

using namespace std;

class Car
{
    public:
    int x;
    Car(int i)
    {
        x=i;
        cout<<"Car Initialization..."<<endl;
    }
    void display_x()
    {
        cout<<"x = "<<x<<"\n";
    }
};
class Engine
{
    public:
    
    float y;
    Engine(float j)
    {
        y=j;
        cout<<"Engine Initialized..."<<endl;
    }
    void display_y()
    {
        cout<<"y = "<<y<<"\n";
    }
};
class Wheels : public Engine, public Car
{
    public:
    int m, n;
    Wheels(int a, float b, int c, float d): Car(a), Engine(b)
    {
        m=c;
        n=d;
       cout<<"Wheels Initialized..."<<endl; 
    }
    void show()
    {
        Wheels wh(5,10.78,56,90);
        cout<<"m = "<<m<<"\n"<<"n = "<<n<<"\n";
    }
};
int main()
{
    Wheels wh(4,67.98,65,20);
    cout<<"\n";
    wh.display_x();
    wh.display_y();
    wh.show();
    
    return 0;
}