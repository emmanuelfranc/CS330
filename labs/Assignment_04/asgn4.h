#ifndef __asgn4__
#define __asgn4__

#include <stdio.h>

/*Function insertionSort sorts an array of integers using the insertion sort algorithm.
 *Inputs:
 *  - arr: A pointer to the first element of the array to be sorted
 *  - size: The number of elements in the array.
 *Outputs: The function sorts the array in place; therefore, the output is the sorted array itself. 
*/
void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)//Iterate over the array starting from the second element
    {
        int key = *(arr + i);//The current element ot be inserted in the sorted portion of the array
        int j = i - 1;
        while (j >= 0 && key < *(arr + j))//Move elements greater than key one position ahead, to make room for the key
        {
            *(arr + j + 1) = *(arr + j);
            j -= 1;
        }
        *(arr + j + 1) = key;//insert the key in its correct position - the sorted portion of the array
    }
}
/* Function selectionSort sorts an array of integers using the selection sort algorithm
 * Inputs:
 * - arr: A pointer to the first element in the array to be sorted
 * - size: The number of elements in the array.
 * Outputs: the function sorts the array in place; the output is the sorted array itself
*/
void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minValueIndex = i; //Assume the minimum value is at the current position
        for (int j = i + 1; j < size; j++) //find the index of the minimum value in the rest of the array
        {
            if (*(arr + j) < *(arr + minValueIndex))
            {
                minValueIndex = j;
            }
        }
        if (minValueIndex != i) //If the minimum value is not in the current position, swap it with the current element.
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minValueIndex);
            *(arr + minValueIndex) = temp;
        }
    }
}
/* Function printGivenArray prints the elements of an array 
 * Inputs:
 * - arr: A pointer to the first element in the array to be printed
 * - n: the number of elements in the array
 * Ooutputs: The function prints the array elements to the standard output
*/
void PrintGivenArray(int *arr, int n){
    printf("\nGiven array is: [");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", *(arr + i));
    }
    printf("%d]\n", *(arr + n - 1));//Print the last element in the array and close the bracket
}

/* Function printArray prints the elements of a sorted array along with the sorting algorithm used
 * Inputs:
 * - arr: A poinnter to the first element of the array to be printed
 * - n: the number of elements in the array
 * - type: A stirng describing the type of sorting that was applied to the array - insertion or selection
 * Ouputss: the function prints the sorted array elements and the sorting type to the standard output.
*/
void printArray(int *arr, int n, char *type)
{
    printf("Sorted Array - %s: [", type);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", *(arr + i));
    }
    printf("%d]\n", *(arr + n - 1));//print the last element and close the bracket
}

#endif