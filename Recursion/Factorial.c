// Program to calculate Factorial of a number using recursion

#include<stdio.h>
int fact(int n){
    if(n==1)
    return 1;
    else
    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    printf("factorial of %d is %d",n,fact(n));
    return 0;
}