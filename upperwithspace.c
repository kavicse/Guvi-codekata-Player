#include<stdio.h>
#include<string.h>
int main() {
  char a[100],temp;
  int i,n;
  printf("\nEnter the string");
  scanf("%[^\n]s",a);
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
  printf("\nString:%s",a);
}
