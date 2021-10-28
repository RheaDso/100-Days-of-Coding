#include<conio.h>
#include<iostream>

using namespacing std;
class GCD
{
    private: int num1, num2;
    public: 
    void input()
    {
        cout<<"Enter two number: ";
        cin>>num1>>num2;
    }
    void gcd()
    {
        int i=2, gcd=1;
        for(i=2; i<num2; i++)
        {
            if(num1%i==0 && num2%i==0)
            gcd=i;
        }
        cout<<"GCD = "<<gcd<<end1;
    }
};
int main()
{
    GCD o;
    o.input();
    o.gcd();
}
