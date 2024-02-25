#include <stdio.h>
#include "asgn4.h"

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nPlease enter %d integers\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i+1);
        scanf("%d", (arr + i));
    }
    // Copying the Original array to a new array for Insertion Sort
    int arrCopy[n];
    for (int i = 0; i < n; i++)
    {
        *(arrCopy + i) = *(arr + i);
    }

    int size = sizeof(arr) / sizeof(*arr);

    PrintGivenArray(arr, size);

    selectionSort(arr, size);
    printArray(arr, size, "Selection Sort");

    insertionSort(arrCopy, size);
    printArray(arrCopy, size, "Insertion Sort");
}