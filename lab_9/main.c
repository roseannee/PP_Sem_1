#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n\nChoose the option:\n"
           "1. Read and display the first line.\n"
           "2. Write the text line to the file (user).\n"
           "3. Add a text line to the file (user).\n"
           "4. Read and display n consecutive text lines from the file (n - user).\n"
           "5. Read and display the full file.\n"
           "6. Read and display a single n-th line (n - user).\n"
           "7. Display a list of items where each line begins.\n"
           "8. Read and display a single n-th line (inf. from option 7).\n"
           "9. Selection of the file where the above operations will be performed (-).\n"
           "0. End.\n");

     printf("Enter the number here: ");
}

int case_6(FILE *f, char str[1000], int number)
{
    printf("\n\nEnter the line number: ");
    scanf(" %d", &number);

    f = fopen("text.txt", "r");
    if(f != NULL) {
        printf("\n---Reading the line:\n\n");

        for(int i = 1; i <= number; i++) {
            fgets(str, sizeof(str), f);
            if(i == number)
                printf("    %s\n", str);
        }

        printf("\n---Completed!\n");
    } else {
        perror("Error");
        return(1);
    }
    fclose(f);
}

int case_7(FILE *f, char str[1000], int amount)
{
    amount = 0;

    f = fopen("text.txt", "r");
    if(f != NULL) {

            while(!feof(f)) {
            fgets(str, sizeof(str), f);
            amount++;
        }
        printf("\n\nThere are %d lines in this file.\n", amount);

    } else {
        perror("Error");
        return(1);
    }
    fclose(f);
}

int main()
{
    int option;

    FILE *f;
    char str[1000];
    int number;
    int amount;


    do{
        menu();
        scanf(" %d", &option);
        switch(option) {
            case 1:
                f = fopen("text.txt", "r");
                if(f != NULL) {
                    printf("\n\n---Reading data from the file:\n\n");

                    fgets(str, sizeof(str), f);
                    printf("    %s\n", str);

                    printf("\n---Completed!\n");
                } else {
                    perror("Error");
                    return(1);
                }
                fclose(f);

                break;

            case 2:
                printf("\n\nEnter the string: ");
                scanf(" %[^\n]s\n", str);

                f = fopen("text.txt", "w");
                if(f != NULL) {

                    if(!fgets(str, sizeof(str), f)) {
                        fprintf(f, "%s", str);
                        printf("\nSuccess!\n");
                    }
                    else
                        printf("\nFailure!\n");
                } else {
                    perror("Error");
                    return(1);
                }
                fclose(f);

                break;

            case 3:
                printf("\n\nEnter the string: ");
                scanf(" %[^\n]s", str);

                f = fopen("text.txt", "a");
                if(f != NULL) {

                    if(!fgets(str, sizeof(str), f)) {
                        fprintf(f, "\n%s", str);
                        printf("\nSuccess!\n");
                    }
                    else
                        printf("\nFailure!\n");
                } else {
                    perror("Error");
                    return(1);
                }
                fclose(f);

                break;

            case 4:
                printf("\n\nHow many lines do you want to output?\n"
                       "Enter the number here: ");
                scanf(" %d", &number);

                f = fopen("text.txt", "r");
                if(f != NULL) {

                    printf("\n---Reading lines:\n\n");

                    for(int i = 0; i < number; i++) {
                        fgets(str, sizeof(str), f);
                        printf("    %s\n", str);
                    }

                    printf("\n---Completed!\n");
                } else {
                    perror("Error");
                    return(1);
                }
                fclose(f);

                break;

            case 5:
                f = fopen("text.txt", "r");
                if(f != NULL) {
                    printf("\n\n---Reading data from the file:\n\n");

                    while(!feof(f)) {
                        fgets(str, sizeof(str), f);
                        printf("    %s\n", str);
                    }

                    printf("\n---Completed!\n");
                } else {
                    perror("Error");
                    return(1);
                }
                fclose(f);

                break;

            case 6:
                case_6(f, str, number);

                break;

            case 7:
                case_7(f, str, number);

                break;

            case 8:
                case_7(f, str, number);

                printf("Which line do you want to output?");

                case_6(f, str, number);

                break;

            /*case 9:

                break;*/
            }
    } while(option != 0);

    return 0;
}
