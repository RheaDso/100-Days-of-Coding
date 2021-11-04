#include <iostream>
 
using namespace std;

class Box 
{
   public:
      static int objectCount;
      
      Box(double l = 5.8, double b = 29.7, double h = 7.5) {
         cout <<"Constructor is called" << endl;
         length = l;
         breadth = b;
         height = h;
         
         objectCount++;
      }
      double Volume() 
      {
         return length*breadth*height;
      }
      
   private:
      double length;   
      double breadth;   
      double height;  
};

int Box::objectCount = 0;

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    
   Box Box2(8.5, 6.0, 2.9); 

   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}
