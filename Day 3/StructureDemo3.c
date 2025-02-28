#include<stdio.h>
typedef struct studentDetailsForCollege
{
  int a;
  char c;
  char name[10];
  float regno;
  double batch;  
}stu;
int main()
{
  printf("The size of my datatype is %d",sizeof(stu));

  return 0;
}