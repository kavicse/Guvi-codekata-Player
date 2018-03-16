#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,d,A,B,e;
  printf("\nEnter A:");
  scanf("%d",&A);
  printf("\nEnter B:");
  scanf("%d",&B);
  a=A;
  b=B;
  if(a>=1&&a<=50)
  {
    if(b>=1&&b<=50)
    {
       d=pow(a,b);
    }
  }
  printf("%d",d);
  
  
}
