#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_of_node(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("linked list is empty");
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("total number of node is: %d", count);
}

int main()
{

    // 1st node
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    // 2nd node
    struct node *current = malloc(sizeof(struct node));
    current->data = 35;
    current->link = NULL;
    head->link = current;

    // 3rd node
    current = malloc(sizeof(struct node));
    current->data = 49;
    current->link = NULL;
    head->link->link = current; // think about this line

    // 4th node
    current = malloc(sizeof(struct node));
    current->data = 67;
    current->link = NULL;
    head->link->link->link = current;

    count_of_node(head);
    
    return 0;
}
