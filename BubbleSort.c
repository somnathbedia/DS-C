// Program to Implement Bubble sort

#include <stdio.h>

void bubbleSort(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (num[j] < num[i])
            {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[100]; // Declartion of array
    int n;
    printf("How many element you want to store ?\n");
    scanf("%d", &n);

    printf("Enter Array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Calling Function to perform bubble sort
    bubbleSort(arr, n); 

    printf("Sorted Array elements are:\n");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    return 0;
}