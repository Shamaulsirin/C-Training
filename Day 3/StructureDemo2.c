#include<stdio.h>
typedef struct studentDetailsForCollege
{
  int regno;
  char name[10]; //members of the structure
  int batch;
}stu;
int main()
{
  stu s1;
  printf("Enter the regno: ");
  scanf("%d",&s1.regno);
  printf("The regno is %d\n",s1.regno);

  getchar();

  printf("Enter the name: ");
  //scanf("%s",&s1.name);      //buffer overflows
  fgets(s1.name,sizeof(s1.name),stdin);    //append \n
  printf("The name is %s",s1.name);



  return 0;
}