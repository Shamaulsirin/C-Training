#include<stdio.h>
typedef struct Employee
{
  int empno;
  char name[100];
}emp;

int main()
{
  emp e1={2,"hello"};

  printf("Emp no is %d\n",e1.empno);
  printf("Emp name is %s\n",e1.name);

  emp*p=&e1;
  printf("Emp no is %d\n",p->empno);
  printf("Emp name is %s\n",p->name);

  return 0;
}