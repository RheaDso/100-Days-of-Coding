#include<stdio.h>
#include<iostream>
using namespace std;

class toll
{
    static int no_of_cars;
    static float amount;
    
    public:
    toll()
    {
        cout<<"\nA car is passed.";
        no_of_cars++;
    }
    void display(){
        cout<<"\nTotal Number of cars: "<<no_of_cars;
        cout<<"\nTotal Amount collected = "<<amount;
        
        
    }
    void calc_amt(int t){
        if(t=1)
        amount+=40;
    }
    
};

int toll::no_of_cars=0;
float toll::amount=0.0;

int main()
{
    int lane_no, type;
    char ch='y';
    int lane[5]={0,0,0,0,0};
do{    
    do{
        cout<<"Enter lane_no.(1-5): ";
        cin>>lane_no;
    } while(lane_no>5);
    do{
        cout<<"Enter type of car (0 for Paying And 1 for Non-Paying): ";
        cin>>type;
    }while(type<0 || type>1);
    
    toll t;
    switch(lane_no)
    {
        case 1: lane[0]++;
        break;
        case 2: lane[1]++;
        break;
        case 3: lane[2]++;
        break;
        case 4: lane[3]++;
        break;
        case 5: lane[4]++;
        break;
    }
    t.calc_amt(type);
    t.display();
    cout<<"\nAny more cars? (y/n): ";
    cin>>ch;
    }
    while(ch=='Y'|| ch=='y');
    for(int i=0; i<5; i++){
        cout<<"Enter cars passed through lane 1"<<i+1<<"is "<<lane[i]<<endl;
    }
    
    return 0;
}