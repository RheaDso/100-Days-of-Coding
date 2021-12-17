#include <iostream>
using namespace std;

class HR
{
    private:
    int salary = 2000000;

    protected:
    string post = "Manager";

    public:
    string name = "Rhea Dsouza";

    int getSalary()
    {
        return salary;
    }
};
class privatederived : private HR
{
    public:
    string getPost()
    {
        return post;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    privatederived p1;
    cout<<"The compiler is unable to access the term salary."<<endl;
    cout<<"Post: "<<p1.getPost()<<endl;;
    cout<<"Name: "<<p1.getName()<<endl;
}