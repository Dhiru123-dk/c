#include<iostream>
using namespace std;
int x;
class emp
{
  public:
  int eno;
  char name[20],des[20];
  void getdata()
  {
    cout<<"enter employee number"<<endl;
    cin>>eno;

    cout<<"enter employee name"<<endl;
    cin>>name;

    cout<<"enter employee designation"<<endl;
    cin>>des;
  }
};
class salery:public emp
{public:
 int bp,da,hra,it;
 void getdata1()
 {

    cout<<"enter employee basic pay"<<endl;
    cin>>bp;

    cout<<"enter employee allowence"<<endl;
    cin>>da;

    cout<<"enter employee home allowence"<<endl;
    cin>>hra;

    cout<<"enter employee income tax"<<endl;
    cin>>it;
 }
 void calculate()
 {
  //int x;
  x=(bp+da+hra)-it;
 }
void display()
{
  cout<<"in hand salery:"<<x;
}
};
int main()
{
  salery s1;
  s1.getdata();
  s1.getdata1();
  s1.calculate();
  s1.display();
}
