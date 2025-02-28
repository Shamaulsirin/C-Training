#include<stdio.h>
int main(){
    
    int n = 123;    // n = 123     
    int sum = 0;
    int rem = 0;
    while(n != 0)
    {
        rem = n % 10;       // 3 // 2 // 1
        sum = sum + rem;    // 3 // 5 // 6
        n = n / 10;         // 12 // 1 // 0
    }
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}