#include <stdio.h>
#include "asgn2.h"

int main()
{
    int n;
    printf("Please enter an integer value: ");
    scanf("%d", &n);
    printf("CubeOfOdd -:\n");
    cubeOfOdd(n);

    printf("\nintroToCS330 -:\n");
    introToCS330(n);

    printf("\nprintHello -:\n");
    printHello(n);

    printf("\npaintGallons -:\n");
    int gallons = paintGallons(10, 12, 8);
    printf("%d\n", gallons);

    printf("\ngrader -:\n");
    grader(72, 88, 22);
}