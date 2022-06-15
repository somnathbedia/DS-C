#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 77;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link = current;

    printf("%d\n",head->link);
    printf("%d\n",current);
    current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;

    printf("%d\n",head->link->link);
    printf("%d\n",current);
    return 0;
}