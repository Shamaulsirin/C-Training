#include<stdio.h>
#define PI 3.14f    //macros - global variable
int main()
{
  //const float PI=3.14f;
  //PI=3.15;
  //constant cannot be modified

  //const float PI;
  //PI=3.14;   (invalid)
  printf("%.2f",PI);
  
  return 0;
}