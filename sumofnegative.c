#include<stdio.h>

void main()
{
 int a[10],n,i,sum=0;
 printf("\nEnter the numbers");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if(a[i]<=0)
   {
     sum=sum+a[i];
   }
 }
 printf("\nThe sum of negative numbers:%d",sum);
}
