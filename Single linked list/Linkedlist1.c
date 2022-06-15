// Program to create linked list of two nodes
#include<stdio.h>
#include<stdlib.h>

//Self referential node
/* Basically a node contain two parts 1.Data Section 2. Link Section */
struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 29;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 66;
    current->link = NULL;
    head->link = current;

    
    return 0;
}