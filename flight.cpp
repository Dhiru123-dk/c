#include<iostream>
using namespace std;
class flight
{
  private:
  int flight_no;
  char source[20];
  char dest[25];
   char fare[10];
  public:
    int input()
    {
    cout<<"enter flight number";
    cin>>flight_no;
    cout<<"enter source name";
    cin>>source;
    cout<<"enter destination place";
    cin>>dest;
    cout<<"fare status";
    cin>>fare;
    }
    int display()
    {
        cout<<"\n flight name:"<<flight_no;
        cout<<"\n source:"<<source;
        cout<<"\n destination:"<<dest;
        cout<<"\n fare status:"<<fare;
    }
};
int main()
{
  flight f;
  f.input();
  f.display();
}
