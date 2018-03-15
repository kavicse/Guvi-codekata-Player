#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],t;
	int l,i,flag=0;
	printf("Enter the sentence");
	scanf("%[^\n]s",a);
	l=strlen(a);
	do
	{
		flag=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==' ')
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==' ')
			{
				flag=1;
				break;
			}
		}
	}while(flag==1);
	printf("\nThe string is: %s",a);
}

  
