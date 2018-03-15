#include<stdio.h>
#define START 2
#define STOP 100
int main()
{
    int i=0;
    while( (i*i) < START )
    {
        i++;
    }
  
    while( (i*i) < STOP )
    {
          printf("%d ",i*i);
           i++;
    }
}
