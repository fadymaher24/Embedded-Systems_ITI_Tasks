#include <stdio.h>

void main (void)
{
int count = 10; 
// create a pyramid of 10 rows
for (int i = 1; i <= count; i++)
{
// print spaces
for (int j = 1; j <= count - i; j++)
printf(" ");
// print stars
for (int k = 1; k <= i; k++)
printf("* ");
// print new line
printf("\n");
}
}