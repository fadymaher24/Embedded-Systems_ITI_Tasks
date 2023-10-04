#include <stdio.h>

void main(void) {
    int x, y;
    int count = 10;
    int arr[count];

    for (int i = 0; i < count; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &x);
        arr[i] = x;
    }

    printf("Enter the value to search: ");
    scanf("%d", &y);

    int ind = -1;
    for (int i = 0; i < count; i++) {
        if (arr[i] == y) {
            ind = i;
            break;
        }
    }
    
    if (ind == -1)
        printf("Value is not exist");
    else
        printf("Value is exist at element number %d ", ind+1);
}
