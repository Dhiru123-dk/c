#include<iostream>
using namespace std;
class incre
{
  public:
  int m,n;
  incre(int x,int y)
 {
  m=x;
  n=y;
 }

void display()
{
  cout<<"m: "<<m  <<" n: "<<n<<endl;
}
friend void operator ++(incre&);
};

void operator ++(incre&x)
{
  ++x.m;
  ++x.n;
}

int main()

{
 incre in1(20,30);
 in1.display();
 ++in1;
 in1.display();
 incre in2(2,4);
 operator ++(in2);
 in2.display();
}


