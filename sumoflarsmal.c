#include<stdio.h>
void main()
{
  int n,a[100],i,j,t=0,b;
  printf("\nEnter the number");
  scanf("%d",&n);
  printf("\nEnter values");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
  }
  }
  printf("\nSmallest:%d",a[0]);
  printf("\nLargest:%d",a[n-1]);
  b=a[0]+a[n-1];
  printf("\nsum of largest and largest:%d",b);
  
}
