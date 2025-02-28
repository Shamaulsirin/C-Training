#include<stdio.h>
int main()
{
  int n1,n2;
  char c;
  printf("Enter the operator \n");
  scanf("%c",&c);
  printf("Enter the n1 \n");
  scanf("%d",&n1);
  printf("Enter the n2 \n");
  scanf("%d",&n2);

  switch(c)
  {
    case '+':
      printf("%d",n1+n2);
      break;

    case '-':
      printf("%d",n1-n2);
      break;
    case '*':
      printf("%d",n1*n2);
      break;
    case '/':
      printf("%d",n1/n2);
      break;
    default:
      printf("Check your operator");
    

  }

}