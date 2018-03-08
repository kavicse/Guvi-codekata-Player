#include<stdio.h>
void main()
{
  char c[30];
  printf("\nEnter day");
  scanf("%s",&c);
  if((c=="saturday")||(c=="sunday")||(c=="SATURDAY")||(c=="SUNDAY"))
  {
    printf("\nHOLIDAY");
  }
  else
  {
    printf("\nNOT A HOLIDAY");
  }
}
