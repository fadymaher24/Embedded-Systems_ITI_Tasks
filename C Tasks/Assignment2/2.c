#include <stdio.h>
#include <string.h>

void main(void) {
    printf("Enter your ID: ");
    int id;
    scanf("%d", &id);

    char password[20];

    switch (id) {
    case 12345:
        printf("Enter your password: ");
        scanf("%s", password);
        // there aren't comparison between strings in C so we use strcmp function.
        if (strcmp(password, "123456789") == 0)
            printf("Welcome Ahmed");
        else {
            printf("Incorrect Password");
        }
        break;
    case 54321:
        printf("Enter your password: ");
        scanf("%s", password);
        if (strcmp(password, "987654321") == 0)
            printf("Welcome Youssef");
        else {
            printf("Incorrect Password");
        }
        break;
    case 11111:
        printf("Enter your password: ");
        scanf("%s", password);
        if (strcmp(password, "111111111") == 0)
            printf("Welcome Mohamed");
        else {
            printf("Incorrect Password");
        }
        break;
    default:
        printf("Incorrect ID");
        break;
    }
}
