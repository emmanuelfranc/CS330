#include <stdio.h>
#include "asgn4.h"

int main()
{
    int n;
    printf("Enter the number of array elements to be sorted: "); //Prompt user for the number of elements to sort
    scanf("%d", &n);

    int arr[n]; //Declare array with n number of elements
    printf("\nPlease enter %d integers\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i+1);
        scanf("%d", (arr + i));
    }
    //Create a copy of the original array for the second sorting algorithm 
    //This ensures that the second sorting algorithm works on the unsorted data
    int arrCopy[n];
    for (int i = 0; i < n; i++)
    {
        *(arrCopy + i) = *(arr + i); //Copy the elements using pointer arithmetic
    }

    int size = sizeof(arr) / sizeof(*arr);

    //Print the original array before sorting
    PrintGivenArray(arr, size);

    //Perform selection sort on the original array and print the sorted array
    selectionSort(arr, size);
    printArray(arr, size, "Selection Sort");

    //perform insertion sort on the copied array and printed the sorted array
    insertionSort(arrCopy, size);
    printArray(arrCopy, size, "Insertion Sort");
}