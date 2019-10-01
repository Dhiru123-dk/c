#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  char name[20],text[100];

  fstream file;
  cout<<"enter file name";
  cin>>name;
  file.open(name,ios::out);

  if(!file)
  {
    cout<<"error";
  }

cout<<"file created"<<endl;
cout<<"enter the text\n";
cin.ignore();
cin.getline(text,100);
file<<text;
file.close();
}
