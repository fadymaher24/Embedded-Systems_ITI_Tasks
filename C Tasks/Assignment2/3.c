// Write a code that will ask the user to enter 3
// numbers, the program will print the maximum
// number of them.

#include <stdio.h>

void main (void)
{

    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
        printf("The maximum number is %d", x);
    else if (y > x && y > z)
        printf("The maximum number is %d", y);
    else if (z > x && z > y)
        printf("The maximum number is %d", z);
    else
        printf("There is no maximum number");

}