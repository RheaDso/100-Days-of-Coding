#include<iostream>

using namespace std;

class Person
{
    private:
    char name[10];
    int code;

    public:
    void getdata()
    {
        cout << "\n Enter name: ";
        cin >> name;
        cout << "\n Enter code: ";
        cin >> code;
    }

    void putdata()
    {
        cout << " Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
};

class Account : public Person
{
    protected:
    int pay;

    public:
    void getdata1()
    {
        cout << "\nEnter Salary: ";
        cin >> pay;
    }

    void putdata1()
    {
        cout << "\nSalary : " << pay << endl;
    }
};

class Admin : public Person
{
    protected:
    int experience;

    public:
    void getdata2()
    {
        cout<< "\n Enter Experience: ";
        cin>> experience;
    }

    void putdata2()
    {
        cout <<"\nExperience: "<< experience << endl;
    }
};

class Master : public Account, Admin
{
    public:

    void getdata3()
    {
        Account :: getdata();
        Account :: getdata1();
        Admin :: getdata2();
    }

    void putdata3()
    {
        Account :: putdata();
        Account :: putdata1();
        Admin :: putdata2();
    }

    void update(int sal)
    {
        Account :: pay = sal;
    }

    void update(int exp, char a)
    {
        Admin :: experience = exp;
    }

    void update(int sal, int exp)
    {
        Account :: pay = sal;
        Admin :: experience = exp;
    }
};

int main(int argc, char const *argv[])
{
    int ch;
    int ch1;
    int s, e;
    Master m;

    do
    {
        cout << "\n 1.Create\n 2.Update\n 3.Display";
        cout << "\n Enter choice : ";
        cin >> ch;
        switch (ch)
        {
            case 1: m.getdata3();
                    break;

            case 2: cout << "\n1.Update Salary and Experience 2.Update Experience 3.Update Salary";
                    cout << "\nEnter your choice: ";
                    cin >> ch1;
                    switch (ch1)
                    {
                        case 1: 
                        cout << "\nEnter new salary: ";
                        cin >> s;
                        cout << "\nEnter new experience: ";
                        cin >> e;
                        m.update(s, e);
                        break;

                        case 2: 
                        cout << "\nEnter new Experience: ";
                        cin >> e;
                        m.update(e, 'a');
                        break;

                        case 3: 
                        cout << "\n Enter new Salary: ";
                        cin >> s;
                        m.update(s);
                        break;

                        default:
                        break;
                    }
                    break;

            case 3: 
            cout << endl;
            m.putdata3();
            break;
        
            default: cout << "Exit";
                    exit(1);
        }
    } while (1);
    
    return 0;
}