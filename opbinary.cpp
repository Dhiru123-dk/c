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
    complexe operator+(complexe);
    void display();
};
 complexe complexe::operator+(complexe c)
 {
   complexe temp;
   temp.x=x+c.x;
   temp.y=y+c.y;
   return temp;
 }
 void complexe::display(void)
 {
   cout<<x<<"+i"<<y;
 }
int main()
{
  complexe c1,c2,c3;
   c1=complexe(2,2.5);
   c2=complexe(2,4.6);
   c3=c1+c2;
   cout<<"c1 =";
   c1.display();
   cout<<"c2 =";
   c2.display();
   cout<<"c3 =";
   c3.display();
}
