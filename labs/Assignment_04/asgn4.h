#ifndef __asgn4__
#define __asgn4__

#include <stdio.h>

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = *(arr + i);
        int j = i - 1;
        while (j >= 0 && key < *(arr + j))
        {
            *(arr + j + 1) = *(arr + j);
            j -= 1;
        }
        *(arr + j + 1) = key;
    }
}
void selectionSort(int *arr, int size)
{
    int n = size;

    for (int i = 0; i < size - 1; i++)
    {
        int minValueIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if(*(arr + j) < *(arr + minValueIndex)){
                minValueIndex = j;
            }
        }
        if(minValueIndex != i){
            int temp = *(arr + i);
            *(arr + i) = *(arr + minValueIndex);
            *(arr + minValueIndex) = temp;
        }
    }
}


#endif