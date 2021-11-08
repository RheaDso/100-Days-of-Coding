#include <iostream>

using namespace std;

class alpha
{
    public:
    int x;
    alpha(int i)
    {
        x=i;
        cout<<"Alpha Initialization"<<endl;
    }
    void display_x()
    {
        cout<<"x= "<<x<<"\n";
    }
};
class beta
{
    public:
    
    float y;
    beta(float j)
    {
        y=j;
        cout<<"Beta Initialized"<<endl;
    }
    void display_y()
    {
        cout<<"y = "<<y<<"\n";
    }
};
class gamma : public beta, public alpha
{
    public:
    int m, n;
    gamma(int a, float b, int c, float d): alpha(a), beta(b)
    {
        m=c;
        n=d;
       cout<<"Gamma Initialized"<<endl; 
    }
    void show_mn()
    {
        gamma g(5,10.78,56,90);
        cout<<"m= "<<m<<"\n"<<"n= "<<n<<"\n";
    }
};
int main()
{
    gamma g(4,67.98,65,20);
    cout<<"\n";
    g.display_x();
    g.display_y();
    g.show_mn();
    
    return 0;
}
