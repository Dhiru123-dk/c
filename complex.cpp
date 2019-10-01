#include<iostream>
using namespace std;
class complexe
{
  private:
  int real;
  int image;
  public:
  complexe():real(0),image(0){}
  void readdata()
  {
    cout<<"enter the value"<<endl;
    cin>>real>>image;
  }
   complexe addcomplexnumber(complexe comp2)
   {
     complexe temp;
     temp.real=real+comp2.real;
     temp.image=image+comp2.image;
     return temp;
   }

void display()
{
  cout<<"show:"<<real<<"+"<<image<<"i"<<endl;
}
};
int main()
{
  complexe c1,c2,c3;
  c1.readdata();
  c2.readdata();
  c3=c1.addcomplexnumber(c2);
  c3.display();
}

