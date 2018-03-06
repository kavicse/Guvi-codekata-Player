#include <stdio.h>
int main()
{char a[100];
int i,j;
printf("\nEnter string");
    scanf("%[^\n]s",a);
    a[0]=a[0]-32;
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==' ')
    a[i+1]=a[i+1]-32;
    }
printf("Camel case:%s",a);
    return 0;
}
