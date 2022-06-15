#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data);
int dequeue();
int peek();
void print();
int isEmpty();
int isFull();

int isEmpty(){
    if(front == -1 || front == front + 1){
        return 1;
    }
    else return 0;
}

int isFull(){
    if(rear == MAX - 1)
    return 1;
    else
    return 0;
}

void enqueue(int data){
    if(isFull()){
        print("Queue overflow.\n");
        exit(1);

    }

    else if (front == -1)
    {
        front = 0;
        rear++;
        queue[rear] = data;
    }
    

}

int dequeue(){
    int data;
    front = 0;
    if (isEmpty())
    {
        print("Queue underflow.\n");
        exit(1);
    }
    data = queue[front];
    front++;
    return data;
    
}

int peek(){
    if(isEmpty())
    {
        print("Queue underflow.\n");
        exit(1);
    }
    return queue[front];
}

void print()
{
    int i;
    if(isEmpty())
    {
        printf("Queue underflow.\n");
        exit(1);
    }

    printf("Queue: ");

    for( i = front ; i <= rear; i++)
    printf("%d ",queue[i]);
    
    printf("\n");
}



int main()
{
    while (1)
    {
        int choice,data;
        printf("1. Insert.\n");
        printf("2. Delete.\n");
        printf("3. Print the first element.\n");
        printf("4. Print all elements of the queue.\n");
        printf("5. Exit.\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: 
                printf("Enter element to be add: ");
                scanf("%d",&data);
                enqueue(data);
                printf("Element added succesfully!\n");
            break;
        
        case 2: 
                data = dequeue();
                printf("Delete element is %d \n",data);
            break;
        
        case 3: 
                printf("The first element of the queue is %d",peek());
            break;

        case 4: print();
            break;
        case 5: 
                exit(1);
            break;
        
        default:
                printf("Wrong choice");
            break;
        }
    }
    
     return 0;
}


