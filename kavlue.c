#include<stdio.h>
void main()
{
  int n,a[100],i,j,t=0,k;
  printf("\nEnter the number");
  scanf("%d",&n);
  printf("\nEnter K;");
  scanf("%d",&k);
  printf("\nEnter values");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
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

   printf("%d",a[k]);
}
