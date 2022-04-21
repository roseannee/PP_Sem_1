#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu()
{
    printf("\n\n------------------------------\n"
           "Choose the option:\n"
           "1. Enter the String No.1.\n"
           "2. Enter the String No.2.\n"
           "3. Display all Strings.\n"
           "4. Display the lengths of all Strings.\n"
           "5. Add the String No. 1 to the String No. 2.\n"
           "6. Assign the value from the String No. 1 to the String No. 2.\n"
           "7. Check if Strings are the same.\n"
           "8. Display Strings in alphabetical order. //doesn't work\n");

     printf("Enter the number here: ");
}

int display(char first[99], char second[99])
{
    printf("\n\nString No. 1: %s\n", first);
    printf("String No. 2: %s", second);
}

int main()
{
    int option;

    char first[100];
    char second[100];

    do{
        menu();
        scanf("%d", &option);
        switch(option) {
            case 1:
                printf("\n\nEnter the String No.1: ");
                scanf(" %[^\n]s", first);

                break;

            case 2:
                printf("\n\nEnter the String No.2: ");
                scanf(" %[^\n]s", second);

                break;

            case 3:
                display(first, second);

                break;

            case 4:
                display(first, second);

                printf("\n\nThe length of the String No. 1: %d\n", strlen(first));
                printf("The length of the String No. 2: %d", strlen(second));

                break;

            case 5:
                display(first, second);

                strcat(first, second);
                printf("\n\nOutput: %s", first);

                break;

            case 6:
                display(first, second);

                strcpy(first, second);
                printf("\n\nOutput: %s", first);

                break;

            case 7:
                display(first, second);

                if(strcmp(first, second) == 0)
                    printf("\n\nString No. 1 & String No. 2 are equal.");
                else
                    printf("\n\nString No. 1 & String No. 2 are different.");
                break;

            /*case 8:
                for(int j = 0; j < i-1; j++){
                    for(int k = 0; k < i-j-1; k++){
                        if(strcmp(first[j], first[j+1]) < 0){
                            strcpy(save, second[k]);
                            strcpy(second[k], second[k+1]);
                            strcpy(second[k+1], save);
                        }
                    }
                }
                break;*/

            default:
                printf("\nThe wrong number. Please try again later.\n");
                return(0);
        }
    } while(option != 0);

    return 0;
}
