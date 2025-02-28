#include<stdio.h>
#include<ctype.h>
int main()
{
  char c='A';
  if(isupper(c))
  {
    printf("true");
  }
  else
  {
    printf("false");
  }
  return 0;
}