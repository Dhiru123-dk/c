#include<iostream>
using namespace std;
class employee
{private:
// int emp no;
 int emp_num;
 char emp_name [18];
 float emp_basic;
 float emp_da;
 float sal;
 float net_sal;
 float emp_it;
 public:
 void get_detail();
 void  fun_net_sal();
 void show_emp_details();
};
void employee::get_detail()
{
  cout<<"\n enter the employee num\n";
  cin>>emp_num;
  cout<<"\n enter the employee name\n";
  cin>>emp_name;
  cout<<"\n enter the employee basic\n";
  cin>>emp_basic;
}
void employee::fun_net_sal()
{
  emp_da=0.52*emp_basic;
  emp_it=0.30*(emp_basic+emp_da);
  net_sal=(emp_basic+emp_da)-emp_it;
}
void employee::show_emp_details()
{
  cout<<"\n\n details of :"<<emp_name;
  cout<<"\n\n employee number :"<<emp_num;
  cout<<"\n\n basic salery :"<<emp_basic;
  cout<<"\n\n employee DA :"<<emp_da;
  cout<<"\n\n employee income tax :"<<emp_it;
  cout<<"\n\n employee net salery :"<<net_sal;
}
int main()
{

  employee emp[10];
  int i,num;
  cout<<"enter no of employee detail\n";
  cin>>num;
   for(i=0;i<=num;i++)
     emp[i].get_detail();
   for(i=0;i<=num;i++)
     emp[i].fun_net_sal();
   for(i=0;i<=num;i++)
     emp[i].show_emp_details();
   return 0;
}
