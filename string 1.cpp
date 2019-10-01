#include<iostream>
using namespace std;
class string1
{  public:
    int length;
  // char *buffer;

    //string1(const char *buf)
   // buffer=new char[20];
    int string_length(char*given_string)
   {
    length=0;
    while(*given_string!='\0')
    {
      length++;
      given_string++;
      return length;
    }
   }
};
 int main()
 {
   char given_string[]="dhirendra";
   cout<<"length of given string"<<length;
 }
