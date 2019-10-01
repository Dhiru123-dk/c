#include<iostream>
using namespace std;
class objecttest
{public:
  objecttest()
  {
    cout<<"object created:"<<endl;
  }
  ~objecttest()
  {
    cout<<"object distroy:"<<endl;
  }
};
int main()
{
  objecttest o;
  objecttest p;
  objecttest q;
  objecttest r;
}
