#include<stdio.h>
#include<stdlib.h>
int main()
{
  int*arr=(int*)malloc(5*sizeof(int));
  arr[0]=1;
  arr[1]=2;
  arr[2]=3;
  arr[3]=4;
  arr[4]=5;

  for(int i=0;i<5;i++)
  {
    printf("%d\n",*(arr+i));
  }

  arr=NULL;
  free(arr);

  for(int i=0;i<5;i++)
  {
    printf("%d\n",*(arr+i));
  }

  char*name="hello";   //read only string
  
  return 0;
}