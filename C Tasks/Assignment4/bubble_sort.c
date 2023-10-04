// Write a C code that defines a function which takes an array as input argument and
// apply the bubble sorting algorithm on it, then print the result

#include <stdio.h>

void bubble_sort(int arr[], int n);

int main()
{
    int arr[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubble_sort(arr, n);
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}