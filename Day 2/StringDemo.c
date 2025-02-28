#include<stdio.h>
#include<string.h>
int main()
{
  char str[]={'h','e','l','l','o','\0'};
  /*int size=sizeof(str)/sizeof(str[0]);
  for(int i=0;i<size;i++)
  {
    printf("%c\n",str[i]);
  }*/

  for(int i=0;i<strlen(str);i++)
  {
    printf("%c\n",str[i]);
  } //no space after 
  
}