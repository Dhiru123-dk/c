#include<iostream>
using namespace std;
class A
{
  private:
  int x;
  int y;
  public:
  A()
  {
    x=12;
    y=23;
  }
 friend class B;
};
class B
{
  public:
  B(){}
  void showA(A obj)
  {
    cout<<"the value of a:"<<obj.x<<endl;
  }
  void showc(A obj)
  {
    cout<<"the value of b:"<<obj.y<<endl;
  }
};
main()
{
  A x;
  B y;
  y.showA(x);
  y.showc(x);
}
