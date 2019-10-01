#include<iostream>
using namespace std;
class base
{int val1,val2;
public:
void getdata()
{
  cout<<"first value";
  cin>>val1;
  cout<<"second value";
  cin>>val2;
}
  friend int add(base a);
};
 int add(base a)
 {
   return int(a.val1+a.val2);
 }
 int main()
 {
   base a;
   a.getdata();
   cout<<"addition value:"<<add(a);
 }


