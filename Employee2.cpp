#include<iostream>

using namespace std;

class employee
{
    private:
    char name[20];
    int passcode;

    public:
    void getdata()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
        cout<<"Enter your passcode: "<<endl;
        cin>>passcode; 
    }

    void putdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Passcode: "<<passcode<<endl;
    }
};
class login : public employee
{
    protected: 
    int login_ID;
    
    public:
    void getdata1()
    {
        cout<<"Enter your Login ID: "<<endl;
        cin>>login_ID;
    }
    void putdata1()
    {
        cout<<"Login ID: "<<login_ID<<endl;
    }
};
class HR : public employee
{
    protected:
    int experience;

    public:
    void getdata2()
    {
        cout<<"Enter Experience: "<<endl;
        cin>>experience;
    } 
    void putdata2()
    {
        cout<<"Experience: "<<experience<<endl;
    }
};
class master : public login, HR
{
    public:
    void getdata3()
    {
        login :: getdata();
        login :: getdata1();
        HR :: getdata2()
    }
    void putdata3()
    {
        login :: putdata();
        login :: putdata1();
        HR :: putdata2();
    }
    void update(int code)
    {
        login :: login_ID = code; 
    }
    void update(int exp, char a)
    {
        HR :: experience = exp;
    }
    void update(int salary, int exp)
    {
        login :: login_ID = salary;
        HR :: experience = exp;
    }
};
int main(int argc, char const *argv[])
{
    int ch;
    int ch1;
    int s, e;
    master m;

    do
    {
        cout<<"1. Create"<<endl;
        cout<<"2. Update"<<endl;
        cout<<"3. Display"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            m.getdata3();
            break;

            case 2:
            cout<<"1. Update Salary and Experience"<<endl;
            cout<<"2. Update Experience "<<endl;
            cout<<"3. Update Salary"<<endl;
            cout<<"Enter your choice: "<<endl;
            cin>>ch1;
            switch(ch1)
            {
                case 1:
                cout<<"Enter new salary: ";
                cin>>s;
                cout<<"Enter new experience: ";
                cin>>e;
                m.update(s,e);
                break;

                case 2:
                cout<<"Enter new salary: "<<endl;
                cin>>s;
                m.update(s);
                break;

                case 3:
                cout<<"Enter new Salary: "<<endl;
                cin>>s;
                m.update(s);
                break; 

                default:
                break;
            }
            break;
            case 3:
            cout<<endl;
            m.putdata3();
            break;
        }
    } 
    while (1);
    return 0;
}
