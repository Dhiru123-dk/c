#include<iostream>
using namespace std;
class student
{
  private:
  int marks1,marks2,marks3;
  char name [15];
  char branch[10];
  //int sem;
  public:
  void marksheet();
  void marks();
};
  void student:: marks()
  {
   cout<<"name:";
   cin>>name;
   cout<<"branch:";
   cin >>branch;
     cout<<"marks1:";
     cin>>marks1;
     cout<<"marks2:";
     cin>>marks2;
     cout<<"marks3:";
     cin>>marks3;
  }
 void student:: marksheet()
  {  cout<<"student details:";
  cout<<"\n name:"<<name;
  cout<<"\n branch "<<branch;
  cout<<"\n first subject"<<marks1;
  cout<<"\n second subject"<< marks2;
  cout<<"\n third subject"<<marks3<<endl;
  }

int main()
{
  student s1;
  s1.marks();
  s1.marksheet();
  return 0;
}
