/* A function(let say odd) is called indirective recursive if it calls another function(let say even())and then even calls odd directly or indirectly. */

/* Programe to print number from 1 to 10 in such a way that when number is odd, add 1 and when number is even substract 1. */
#include <stdio.h>
void odd();
void even();
int n = 1;

void odd()
{
    if (n <= 10)
    {
        printf("%d ", n + 1);
        n++;
        even();
    }
    return;
}

void even()
{
    if (n <= 10)
    {
        printf("%d ", n - 1);
        n++;
        odd();
    }
    return;
}

int main()
{
    odd();
    return 0;
}