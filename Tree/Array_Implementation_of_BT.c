// Program to Represent a Binary Tree Using an Array.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

char tree[MAX];

void root(char);
void left(char c, int parent);
void right(char c, int parent);
void print();

int main()
{
    root('A');
    left('B', 0);
    right('C', 0);
    left('D', 1);
    right('E', 1);
    print();
    return 0;
}

void root(char c)
{
    if (tree[0] != '\0')
    {
        printf("Tree is full\n");
    }
    else
    {
        tree[0] = c;
    }
}

void left(char c, int parent)
{
    if (tree[parent] == '\0')
    {
        printf("Can't insert\n");
    }
    else
    {
        tree[(2 * parent + 1)] = c;
    }
}

void right(char c, int parent)
{
    if (tree[parent] == '\0')
    {
        printf("Can't insert\n");
    }
    else
    {
        tree[(2 * parent + 2)] = c;
    }
}

void print()
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        if (tree[i] == '\0')
        {
            printf("X");
        }
        else
        {
            printf("%c", tree[i]);
        }
    }
}
