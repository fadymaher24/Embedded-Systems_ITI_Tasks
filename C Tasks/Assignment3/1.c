// Write a C program the implement 2 function:

// 1- Function to get the maximum of 4 values
// 2- Function to get the minimum of 4 values

// The program will ask the user first to enter the 4 values, then print the maximum
// number and minimum number of them.
#include <stdio.h>

int maximum(int a, int b, int c, int d);
int minimum(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x = maximum(a, b, c, d);
    int y = minimum(a, b, c, d);
    printf("The Maximum number is: %d  ,The minimum number is: %d",x,y);

    return 0;
}

int maximum(int a, int b, int c, int d)
{
 int max = a;
    if (max<b)
        max= b;
    if (max<c)
        max= c;
    if (max<d)
        max=d;
    return max;
}

int minimum(int a, int b, int c, int d)
{
    int min = a;
    if (min>b)
        min= b;
    if (min>c)
        min= c;
    if (min>d)
        min=d;
    return min;
}


