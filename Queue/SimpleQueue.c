#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
    if(front == -1)
    front = 0;
    rear++;

    queue[rear] = data;
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

int isEmpty();

int isEmpty(){
    if(front == -1 || front == front + 1){
        return 1;
    }
    else return 0;
}
void printQ()
{
    
    int i;
    if(isEmpty())
    {
        printf("Queue underflow.\n");
        exit(1);
    }

    printf("Queue: ");

    for( i = front ; i <= rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}



int main()
{
    enqueue(15);
    enqueue(16);
    enqueue(18);

    printQ();
    


    return 0;
}