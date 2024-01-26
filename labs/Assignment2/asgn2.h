#ifndef __asgn2__
#define __asgn2__

#include <stdbool.h>
#include <math.h>

/* the two lines above check to ensure
we haven't already included this header*/

/* your functions go here */
// Note: main() goes in the asgn2.c file

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPowOfTwo(int n)
{
    if (n <= 0)
        return false;

    for (int i = n; i > 1; i /= 2)
    {
        if (i % 2 != 0)
            return false;
    }
    return true;
}

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

void introToCS330(int n)
{
    if (n % 3 == 0 && n % 7 == 0)
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
    else if (isPrime(n) && n != 3 && n != 7)
    {
        printf("Go Blazers\n");
    }
    else
    {
        printf("%d\n", n * n * n);
    }
}

void printHello(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (isPowOfTwo(i))
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

int paintGallons(float length, float width, float height)
{
    float area1 = length * height;
    float area2 = width * height;

    float areaCeil = length * width;

    float totalArea = 2 * (area1 + area2) + areaCeil;

    return ceil(totalArea / 400);
}

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