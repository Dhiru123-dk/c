#include<iostream>
using namespace std;
class circle
{
  protected:
  float radius;
  public:
  circle(float r)
  {
    radius=r;
  }
virtual float area()

{float a;
a=3.14*radius*radius;
return a;
}
};
class cylinder:public circle
{
private:
float hight;
public:
cylinder(float h,float r):circle(r)
{
  hight=h;
}
float area()
{
  float a;
  a=(2*3.14*radius*radius)+(2*3.14*radius*radius);
  return a;
}
};
int main()
{
  circle *ptr;
  circle ob(8);
  cylinder ob1(8,7);
   ptr=&ob;
   cout<<"area of circle"<<ptr->area();
   ptr=&ob1;
    cout<<"area of cylinder"<<ptr->area();

}
