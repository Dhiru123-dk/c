#include<iostream>
using namespace std;
class B;
class A
{ private:
  int numA;
  public: A():numA(12){} //another way of intializing constructor
  friend int sum(A,B);
};
class B
{private:
 int numB;
 public:
 B():numB(10){}
 friend int sum(A,B);
};
int sum(A objectA,B objectB)

{

  return(objectA.numA+objectB.numB);
}
int main()
{
 A objectA;
 B objectB;
 cout<<"sum:"<<sum(objectA,objectB);
 return 0;
}
