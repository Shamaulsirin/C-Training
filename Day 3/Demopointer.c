#include<stdio.h>
int main()
{
  int a=20;
  int*p=&a;

  int **p1=&p;  //double pointer

  printf("The value of a is %d\n",a);
  printf("The address of a is %d\n",&a);
  printf("The address stored inside p is %d\n",p);
  printf("The address of p is %d\n",&p);
  printf("The value inside p is %d\n",*p);
  printf("The address of p1 is %d\n",&p1);
  printf("The value inside p1 is %d\n",**(p1));  //**p1 (valid)
  
  return 0;
}