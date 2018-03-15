#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char a[100],temp;
  int i,n;
  cout<<"\nEnter the string";
  cin>>a;
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    temp=(int)a[i];
    if(temp>=65&&temp<=90)
    {
      a[i]=(char)temp+32;
    }
    if(temp>=97&&temp<=122)
    {
      a[i]=(char)temp-32;
    }
    
  }
 cout<<"String:"<<a;;
}
