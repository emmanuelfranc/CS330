#include <stdio.h>
#include "asgn2.h"

//The main method
int main()
{
    int n;
    printf("Please enter an integer value: ");
    scanf("%d", &n);
    printf("CubeOfOdd -:\n");
    cubeOfOdd(n); //cubeOfOdd function call 

    printf("\nintroToCS330 -:\n");
    introToCS330(n); //function call

    printf("\nprintHello -:\n");
    printHello(n); //function call


    float i,j,k;
    printf("\nPlease enter three float values separated by spaces: ");
    scanf("%f %f %f", &i, &j, &k);
    printf("paintGallons -:\n");
    int gallons = paintGallons(i, j, k); //function call
    printf("%d\n", gallons);


    float l, m;
    int p;
    printf("\nPlease enter two floats and one integer separated by spaces in that order: ");
    scanf("%f %f %d", &l, &m, &p);

    printf("grader -:\n");
    grader(l, m, p); //function call
}