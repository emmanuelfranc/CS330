#include <stdio.h>
#include "asgn4.h"

int main(){
    int arr[] = {1,42,4,13,1,34,12,0,19};

    selectionSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", arr[i]);
    }
    
     FILE *fout = fopen("input.txt", "r");
}