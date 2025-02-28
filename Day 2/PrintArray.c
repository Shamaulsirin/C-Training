#include<stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  int size=*(&a+1)-a;
  int*p=a;  //or &a;
  for(int i=0;i<size;i++)
  {
    print("%d",*(p++));
  }
  return 0;
}
