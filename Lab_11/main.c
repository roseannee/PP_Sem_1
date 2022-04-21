#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n\n---------------------\n"
           "    MENU\n\n"
           " 1. Writing numbers to the file\n"
           " 2. Reading numbers from the file\n"
           " 3. Writing numbers to the file with the given name (user)\n"
           " 4. Reading numbers from the file with the given name (user)\n"
           " 5. Adding numbers to the file with the given name (user)\n"
           " 6. Reading numbers from the file and adding them to the array\n"
           " 7. Give the file name (user)\n"
           " 0. End\n");

     printf(" Enter the number here: ");
}

int entry(char str[100], FILE *f)
{
    printf("\n\n Enter the numbers: ");
    scanf(" %[^\n]s\n", str);

    if(!fgets(str, sizeof(str), f)) {
        fprintf(f, " %s", str);
        printf("\n--- Success!\n");
    } else
        printf("\n--- Failure!\n");
}

int read(char str[100], FILE *f)
{
    printf("\n\n--- Reading data from the file:\n\n");

    while(!feof(f)) {
        fgets(str, sizeof(str), f);
        printf("%s", str);
    }

    printf("\n\n--- Completed!\n");
}

int main()
{
    printf("\n\n FILE HANDLING");

    int option;

    FILE *f;
    char str[100];
    char f_name[50];

    int *arr = NULL;
    int *arr_data = NULL;
    int amount = 0;

    do{
        menu();
        scanf(" %d", &option);
        switch(option) {
            case 1:
                printf("\n\n---------------------\n");
                printf("    1. WRIRING NUMBERS");


                f = fopen("text.txt", "w");
                if(f != NULL) {
                    entry(str, f);
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 2:
                printf("\n\n---------------------\n");
                printf("    2. READING NUMBERS");

                f = fopen("text.txt", "r");
                if(f != NULL) {
                    read(str, f);
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 3:
                printf("\n\n---------------------\n");
                printf("    3. WRIRING NUMBERS WITH THE NAME");

                //printf("\n\n Write the name of the file: ");
                //scanf(" %s", &f_name);

                f = fopen(f_name, "w");
                if(f != NULL) {
                    entry(str, f);
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 4:
                printf("\n\n---------------------\n");
                printf("    4. READING NUMBERS WITH THE NAME");

                //printf("\n\n Write the name of the file: ");
                //scanf(" %s", &f_name);

                f = fopen(f_name, "r");
                if(f != NULL) {
                    read(str, f);
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 5:
                printf("\n\n---------------------\n");
                printf("    5. ADDING NUMBERS WITH THE NAME");

                //printf("\n\n Write the name of the file: ");
                //scanf(" %s", &f_name);

                f = fopen(f_name, "a");
                if(f != NULL) {
                    entry(str, f);
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 6:
                printf("\n\n---------------------\n");
                printf("    6. READING NUMBERS & ADDING TO THE ARRAY");

                //printf("\n\n Write the name of the file: ");
                //scanf(" %s", &f_name);

                f = fopen(f_name, "r");
                if(f != NULL) {
                    read(str, f);

                    fseek(f, 0, SEEK_END);
                    arr = arr_data;
                    for(int i = 0; i < amount; i++){
                        fprintf(f, " %d\n", *arr);
                        arr++;
                    }
                } else {
                    perror("\n\n Error");
                    return(1);
                }
                fclose(f);

                break;

            case 7:
                printf("\n\n---------------------\n");
                printf("    7. FILE NAME");

                printf("\n\n Write the name of the file: ");
                scanf(" %s", &f_name);

                printf("\n--- Success!\n");

                break;
        }
    } while(option != 0);

    return 0;
}
