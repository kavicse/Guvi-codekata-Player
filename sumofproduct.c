#include<stdio.h>
void main()
{
  int a[10][10],r,c,i,j,sum=0,sum1=0,pro;
  printf("\nEnter rows");
  scanf("%d",&r);
  printf("\nEnter columns");
  scanf("%d",&c);
  printf("\nEnter matrix");
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nMatrix");
  printf("\n");
   for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d",a[i][j]);
      printf("\t");
    }
    printf("\n");
  }


  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==j)
      {
        sum=sum+a[i][j];
      }
    }
  }
  for(i=0,j=c-1;i<r,j>=0;i++,j--)
  {
    sum1=sum1+a[i][j];
  }
  pro=sum*sum1;
  printf("Result:%d",pro);
  
}
