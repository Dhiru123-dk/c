#include<iostream>
#include<cstring>
using namespace std;
class strin
{
  char str1[20],str2[20];
  public:
   void getdata()
   { cout<<"string first:";
     cin>>str1;
     cout<<"string second:";
     cin>>str2;
   }
   strin operator+(strin b)
   {
     strcat(b.str1,b.str2);
     return b;
   }
   void display()
   {
     cout<<"copied string:\n"<<str1;
   }
  strin operator==(strin b)
  {
    if(strcmp(b.str1,b.str2)==0)

    {cout<<"eqal\n";
    }
    else
     {cout<<"not equal:\n";
  }
  }
};
int main()
{
  strin a,b,c;
  b.getdata();
  c=a+b;
  c.display();
  b=a==b;
}
