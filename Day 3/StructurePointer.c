#include<stdio.h>
#include<string.h>
typedef struct student
{
  int regno;
  char name[100];  
}stu;
int main()
{
  stu s1;
  stu*p=&s1;
  p->regno=241;

  printf("The regno is %d\n",p->regno);

  strcpy(p->name,"shama");
  printf("The name is %s",p->name);
  /*char stdname[100];
  
  printf("Enter the name: ");
  fgets(stdname,sizeof(stdname),stdin);
  strcpy(s1.name,stdname);
  printf("The student name is %s",s1.name);*/

  return 0;
}