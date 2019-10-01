#include<iostream>
using namespace std;

class check
{ public:
    int i;
   void getdata()
   {
     cout<<"enter th values";
     cin>>i;
   }
 check operator ++()
  {
    check temp;
    temp.i=++i;
    return temp;
  }
  check operator ++(int)
  {
    check temp;
    temp.i=i++;
    return  temp;
  }
  void display()
  {
    cout<<"updated value :"<<i;
  }
};
int main()
{
  check obj,obj1;
  obj.getdata();
  //obj.display();
  //obj1.display();
  obj1=++obj;
  //obj1=obj++;
  obj.display();
  obj1=++obj;

  obj.display();
}

