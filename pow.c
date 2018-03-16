#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,d,A,B,e;
  long C,c;
  printf("\nEnter A:");
  scanf("%d",&A);
  printf("\nEnter B:");
  scanf("%d",&B);
  printf("\nEnter C:");
  scanf("%d",&C);
  a=A;
  b=B;
  c=C;
  d=pow(a,b);
  e=d%c;
  printf("%d",e);
  
  
}
