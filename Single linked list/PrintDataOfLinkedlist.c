#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
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

    print_data(head);
    return 0;
}