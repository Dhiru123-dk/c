#include<iostream>
#include<string.h>
using namespace std;

class student
{
    protected:
    int stdid;
    string name;
    float m1,m2,m3;
    public:
    void get()
    {

    cout<<"enter student id"<<endl;
    cin>>stdid;
    cout<<"enter student name"<<endl;
    cin>>name;

  //  public:
//float m1,m2,m3;
//void get1()
//{

    cout<<"enter student marks1"<<endl;
    cin>>m1;

    cout<<"enter student marks2"<<endl;
    cin>>m2;

    cout<<"enter employee maRKS3"<<endl;
    cin>>m3;
}

};
class sports
{
public:
 int sm;
void get1()
{

    cout<<"enter sports marks"<<endl;
    cin>>sm;

}

};
class result:public student,public sports
{
public:
//int calculate()
//{ int x;
 // x=((m1+m2+m3)/3);
//  cout<<"avg:   \n"<<x;
//}
void display()
{
    int total;
  cout<<"student id:"<<stdid<<endl;
  cout<<"student name:"<<name<<endl;
  total=m1+m2+m3+sm;
   cout<<"total:"<<total;
  //cout<<"avg is:\n"<<x;
}
};
int main()
{
 result r;
 r.get();
 r.get1();
 r.display();
 //r.calculate();

}

//
