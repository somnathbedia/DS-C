#include <stdio.h>

// Selection sort function
void selection(int num[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = 1 + i; j < n; j++)
        {
            if (num[j] < num[min])
            {
                min = j;
            }
        }

        // swap the minimum element with the first element
        int temp = num[min];
        num[min] = num[i];
        num[i] = temp;
    }
}

void printArray(int ary[], int n)
{
    printf("Sorted elements:[");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", ary[i]);
    }
    printf("]");
}

int main()
{
    int arr[100], n;

    printf("How many elements you want to store ?\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling function to implement selection sort
    selection(arr, n);

    // Priinting array elements after sorting
    printArray(arr, n);

    return 0;
}