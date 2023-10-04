// Write a C program to act as simple calculator, first it will ask the user to enter the
// operation ID, depending on the operation, the program will ask the user either to
// enter 1 operand or 2 operands and the program will execute the operation and print
// the result. Each operation should be implemented in a stand a long function.
// ID Operation Number of Operands
// 1 Add 2
// 2 Subtract 2
// 3 Multiply 2
// 4 Divide 2
// 5 And 2
// 6 Or 2
// 7 Not 1
// 8 Xor 2
// 9 reminder 2
// 10 Increment 1
// 11 Decrement 1

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int and(int a, int b);
int or(int a, int b);
int not(int a);
int xor(int a, int b);
int reminder(int a, int b);
int increment(int a);
int decrement(int a);

void main(void)
{
    int operation, operand1, operand2;
    printf("Enter the operation ID: ");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", add(operand1, operand2));
        break;
    case 2:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", subtract(operand1, operand2));
        break;
    case 3:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", multiply(operand1, operand2));
        break;
    case 4:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", divide(operand1, operand2));
        break;
    case 5:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", and(operand1, operand2));
        break;
    case 6:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", or(operand1, operand2));
        break;
    case 7:
        printf("Enter the operand: ");
        scanf("%d", &operand1);
        printf("The result is: %d", not(operand1));
        break;
    case 8:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", xor(operand1, operand2));
        break;
    case 9:
        printf("Enter the first operand: ");
        scanf("%d", &operand1);
        printf("Enter the second operand: ");
        scanf("%d", &operand2);
        printf("The result is: %d", reminder(operand1, operand2));
        break;
    case 10:
        printf("Enter the operand: ");
        scanf("%d", &operand1);
        printf("The result is: %d", increment(operand1));
        break;
    case 11:
        printf("Enter the operand: ");
        scanf("%d", &operand1);
        printf("The result is: %d", decrement(operand1));
        break;
    default:
        printf("Invalid operation ID");
        break;
}
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int and(int a, int b)
{
    return a & b;
}

int or(int a, int b)
{
    return a | b;
}

int not(int a)
{
    return ~a;
}

int xor(int a, int b)
{
    return a ^ b;
}

int reminder(int a, int b)
{
    return a % b;
}

int increment(int a)
{
    return a + 1;
}

int decrement(int a)
{
    return a - 1;
}
