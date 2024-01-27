#ifndef __asgn2__
#define __asgn2__

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* the two lines above check to ensure
we haven't already included this header*/

/* your functions go here */
// Note: main() goes in the asgn2.c file


/** function isPrime takes an integer argument n and returns true if the number is a prime number
 *  returns false if it is not
*/
bool isPrime(int n)
{
    if (n <= 1)         //If number is less than or equal to 1, then it is not prime.
        return false;
    for (int i = 2; i <= n / 2; i++) // i starts from 2 up to n/2, 
    {                                
        if (n % i == 0)             // If n is divisibe by any number between 2 and n/2, it is not prime.
        {
            return false;
        }
    }
    return true;                    //return true if no divisors are found.
}

/* function isPowOfTwo, just like isPrime returns a boolean (true or false). 
** If the integer argument - n is a power of 2, return true. Else, return fasle.
*/
bool isPowOfTwo(int n)
{
    if (n <= 0)
        return false;

    for (int i = n; i > 1; i /= 2) //As long as i is greater than 1, keep looping, dividing by 2 in each step
    {                              //if i arrives at a point where it's not divisible by 2, then i is not a power of 2.
        if (i % 2 != 0)
            return false;
    }
    return true;
}

/* function cubeOfOdd takes an integer parameter -n and prints the cube of all odd numbers less than n.
** returns void. 
*/
void cubeOfOdd(int n)
{
    for (int i = 1; i < n; i++) // i starts from 1 and goes to n - 1
    {
        if (i % 2 != 0) // for each iteration of i, if i is not an even number,
        {
            printf("%d\n", i * i * i); // print i^3
        }
    }
}

/** function takes an integer parameter -n, returns void and prints to the output
 *  depending on different conditions
*/
void introToCS330(int n)
{
    if (n % 3 == 0 && n % 7 == 0) // first check if n is divisible by both 3 and 7 as checking 7 or 3 first will return an unexpected output
    {
        printf("UAB CS 330\n");
    }
    else if (n % 7 == 0)
    {
        printf("UAB\n");
    }
    else if (n % 3 == 0)
    {
        printf("CS\n");
    }
    else if (isPrime(n) && n != 3 && n != 7) // call the isPrime function to determine whether or not n is a prime number
    {
        printf("Go Blazers\n");
    }
    else
    {
        printf("%d\n", n * n * n); // print n cube
    }
}

/**
 * PrintHello takes an integer -n and prints a string of integers from 0 to n
 * It prints HELLO for every power of 2.
*/
void printHello(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (isPowOfTwo(i)) // call the isPowOfTwo function to determine whether or not n is a power of 2
        {
            printf("HELLO");
        }
        else
        {
            printf("%d", i);
        }
    }
    printf("\n");
}

/**
 * printGallons takes 3 parameters of type float which represent a rectangular room.
 * It commputers the amount of paint needed to cover four walls and celings.
 * Returns an integer which is the value of calculations rounded up to the nearest whole number.
*/
int paintGallons(float length, float width, float height)
{
    float area1 = length * height;
    float area2 = width * height;

    float areaCeil = length * width;

    float totalArea = 2 * (area1 + area2) + areaCeil;

    return ceil(totalArea / 400); //round up the result from the calculation
}

/**
 * grader takes two floats and one integer, returns void and prints pass or fail depending on different criteria.
 * function uses the calculation done with the parameters to determine whether to print pass or fail.
*/
void grader(float avg_exams, float avg_hw, int attendance)
{
    if ((attendance > 20) && (avg_exams > 70) && (avg_hw > 70) && (avg_exams > 85 || avg_hw > 85))
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}

#endif