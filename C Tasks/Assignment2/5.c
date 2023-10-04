// Write a login program in C that ask the
// user to enter his ID and his password, if
// the ID is correct the system will ask the
// user to enter his password up to 3 times,
// if he enters the password right the
// systems welcomes him, if the three times
// are incorrect, the system print No more
// tries. If the user ID is incorrect the
// system print You are not registered

#include <stdio.h>
#include <string.h>

void main(void)
{
    int id;
    char password[20];
    int count = 0;

    while (1)
    {
        printf("Enter your ID: ");
        scanf("%d", &id);

        switch (id)
        {
        case 12345:
            printf("Enter your password: ");
            scanf("%s", password);
            // there aren't comparison between strings in C so we use strcmp function.
            if (strcmp(password, "123456789") == 0)
            {
                printf("Welcome Ahmed");
                return;
            }
            else
            {
                printf("Incorrect Password\n");
                count++;
            }
            break;
        case 54321:
            printf("Enter your password: ");
            scanf("%s", password);
            if (strcmp(password, "987654321") == 0)
            {
                printf("Welcome Youssef");
                return;
            }
            else
            {
                printf("Incorrect Password\n");
                count++;
            }
            break;
        case 11111:
            printf("Enter your password: ");
            scanf("%s", password);
            if (strcmp(password, "111111111") == 0)
            {
                printf("Welcome Mohamed");
                return;
            }
            else
            {
                printf("Incorrect Password\n");
                count++;
            }
            break;
        default:
            printf("Incorrect ID\n");
            count++;
            break;
        }

        if (count == 3)
        {
            printf("No more tries\n");
            return;
        }
    }



    
}