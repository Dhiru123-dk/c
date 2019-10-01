#include<iostream>
#include<cmath>
using namespace std;
class traingle
{
   private:
    double base;
    double hight;
   public:
    traingle()
   {
    double hi,ba;
    hight=hi;
    base=ba;
   }
    double hypot();
    double area();
};
 int traingle::hypot()
{double hype=0;
double hype= sqrt((base*base)+(hight*hight));
return hype;
}
int traingle::area()
{
  double ans=0;
  ans=(0.5)*base*hight;
  cout<<ans;

}
int main()
{
 // cout<<"base";
 // cin>>base;
  //cout<<"hight";
  //cin>>hight;
  triangle.t;
  t.hypot(3,4);
  t.area(3,4);
}

