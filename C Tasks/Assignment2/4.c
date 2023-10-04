// Write a C program that ask the user to
// enter two numbers and print their
// summation, this program should never
// ends until the user close the window

#include <stdio.h>

void main(void) {
    int x, y;
    while (1) {
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);
        printf("The summation is %d\n", x + y);
    }
}