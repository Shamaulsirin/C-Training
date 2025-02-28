#include<stdio.h>
typedef union Employee
{
  int x;
  char c;
}emp;

int main()
{
  //emp e1={2,'c'};    //invalid way
  emp e1;
  e1.x=65;
  e1.c='d';

  printf("The value of x is %d\n",e1.x);
  printf("The char in c is %c\n",e1.c);
  printf("The size of union is %d\n",sizeof(emp));
  //whenever we assign value to the union member, the other member also affect

  return 0;
}