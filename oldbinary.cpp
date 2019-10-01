#include<iostream>
using namespace std;
class complexe
{
    float x,y;
    public:
    complexe(){}
    complexe(float real,float image)
    {
      x=real;
      y=image;
    }
    complexe operator+(int);
    void display();
};
 complexe complexe::operator+(int a)
 {
   complexe temp;
   temp.x=x+a;
   temp.y=y;
   return temp;
 }
 void complexe::display(void)
 {
   cout<<x<<y;
 }
int main()
{
  complexe c1,c2,c3;
   c1=complexe(2,5);
   c2=complexe(2,0);
   c3=c1+5;
   cout<<"c1 =";
   c1.display();
   cout<<"\n c2 =\n";
   c2.display();
   cout<<"\n c3 =\n";
   c3.display();
}

