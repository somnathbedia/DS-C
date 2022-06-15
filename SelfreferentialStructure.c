#include<stdio.h>

struct self{
    int a;
    struct self *ptr;
};

int main()
{
    struct self var1,var2;
    var1.a = 20;
    var1.ptr = NULL;

    var2.a = 45;

    var1.ptr = &var2; // suppose var1.ptr = 1008

    printf("%d",var1.ptr->a); // This line will print 45 because we are accessing through the address of var2

    return 0;
}