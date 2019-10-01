#include<iostream>
using namespace std;
class shape
{
  public:
  int len,wid,base,high;
  public:
  void get()
  {
    cout<<"lenth for rectangle:"<<endl;
    cin>>len;
    cout<<"width for rectangle:"<<endl;
    cin>>wid;
  }
  void get1()
    {cout<<"base for triangle:"<<endl;
    cin>>len;
    cout<<"hight for traingle:"<<endl;
    cin>>len;
    //cout<<"lenth for rectangle:"<<endl;
    //cin>>len;

  }
};
class triangle:public shape
{
  public:
  void area()
  { float areat;
    areat=(0.5)*base*high;
    cout<<"area of triangle"<<areat;
  }
};
class rect:public shape
{
  public:
  void arear()
  { int f;
    f=len*wid;
    cout<<"area of rectangle:\n"<<f;
  }
};
int main()
{

   rect r;
  r.get();
  r.arear();
  triangle t;
  t.get1();
  t.area();

}
