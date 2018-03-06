#include <stdio.h>
int main()
{
  char a[100],b[100];
int i,count;
printf("\nEnter two strings:");
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]!=b[i])
    count++;
    }
    if(count==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
