#include<stdio.h>
void main()
{
	int n,m,sum=0,sq,sqr=0;
	printf("\nEnter number");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
		if(m!=0)
		{
			sq=m*m;
	        sqr=sqr+sq;
		}
	}
	printf("\n%d",sqr);
}
