#include<stdio.h>
#include<string.h>
void main()
{
  char a[100],b[100],c[100];
  int i,n,e=0,d=0;
  printf("\nEnter the string");
  scanf("\n%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
    b[e]=a[i];
    e++;
    }
    else
    {
      c[d]=a[i];
      d++;
      
    }
  }
  for(i=0;i<e;i++)
  {
    printf("%c",b[i]);
  }
  for(i=0;i<d;i++)
  {
    printf("%c",c[i]);
  }
}
