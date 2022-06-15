// Programe to insert new node at the end.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_new_node_at_end(struct node *head, int data)
{
    struct node *ptr, *tempLocation;

    // node which is to be inserted
    tempLocation = malloc(sizeof(struct node));
    tempLocation->data = 600;
    tempLocation->link = NULL;

    ptr = head;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    // Update the link part of the last node with the address of temporary allocated node
    ptr->link = tempLocation;
}

int total_Node(struct node *head)
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

    return count;
}

int main()
{
    // 1st Node
    struct node *head = malloc(sizeof(struct node));
    head->data = 24;
    head->link = NULL;

    // 2nd Node
    struct node *newLocation = malloc(sizeof(struct node));
    newLocation->data = 87;
    newLocation->link = NULL;
    head->link = newLocation;

    // 3rd Node
    newLocation = malloc(sizeof(struct node));
    newLocation->data = 100;
    newLocation->link = NULL;
    head->link->link = newLocation;

    // Invocking the function to add node at the end
    add_new_node_at_end(head, 56);

    printf("Total Number of Node After Addition of new node is %d ", total_Node(head));

    return 0;
}