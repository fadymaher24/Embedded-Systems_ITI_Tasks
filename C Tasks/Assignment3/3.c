#include <stdio.h>

int maximum(int arr[]);
int minimum(int arr[]);

int main()
{
int arr[10];
int x;
for (int i = 0; i < 5; i++)
{
    printf("enter value of %d\n",i+1);
    scanf("%d",&x);
    arr[i]=x;
}
maximum(arr);
minimum(arr);
    return 0;
}

int maximum(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
            max= arr[i];
    }
    return printf("The maximum number is: %d",max);
}

int minimum(int arr[])
{
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min>arr[i])
            min= arr[i];
    }
    return printf(" ,The minimum number is: %d",min);
}