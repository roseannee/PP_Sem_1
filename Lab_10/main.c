#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n\n---------------------\n"
           "    MENU\n\n"
           " 1. Data entry\n"
           " 2. Data display\n"
           " 3. a + b\n"
           " 4. a - b\n"
           " 5. a * b\n"
           " 6. a / b\n"
           " 7. Data deletion\n"
           " 0. End.\n");

     printf(" Enter the number here: ");
}

int entry(int *a, int *b, int amount)
{
    a = b;

    printf("\n Input %d number of elements:\n", amount);
    for(int i = 0; i < amount; i++) {
        printf("    element %d: ", i + 1);
        scanf(" %d", a);
        a++;
    }
}

int ch(int amount)
{
    if(amount > 0)
        return 1;
    else
        return 0;
}

void display(int *a, int *b, int amount){
    a = b;

    printf("\n\n The elements you entered are: \n");
    for(int i = 0; i < amount; i++){
        printf("    element %d: %d\n", i + 1, *a);
        a++;
    }
}

void sum(int *a, int *b, int *amount)
{
    a = b;
    int res = 0;

    for(int i = 0; i < amount; i++){
        res += *a;
        a++;
    }
    printf("\n The sum is = %d\n", res);
}

void multipl(int *a, int *b, int amount)
{
    a = b;
    int res = 1;

    for(int i = 0; i < amount; i++){
        res *= *a;
        a++;
    }
    printf("\n The multiplication is = %d\n", res);
}

int id(int *a, int *b, int index)
{
    a = b;

    for(int i = 1; i < index; i++)
        a++;

    return *a;
}

int main()
{
    printf("\n\n POINTERS");

    int option;

    int *a = NULL;
    int *b = NULL;
    int amount;
    int check;
    int index_1;
    int index_2;
    int result;

    do{
        menu();
        scanf(" %d", &option);
        switch(option) {
            case 1:
                printf("\n\n---------------------\n");
                printf("    1. DATA ENTRY");

                free(b);
                amount = 0;

                printf("\n\n Input total number of elements: ");
                scanf(" %d", &amount);

                b = malloc(amount * sizeof(int));
                if(b == NULL) {
                    printf(" No memory is allocated!");
                    exit(1);
                } else
                    printf(" Success!\n");

                entry(a, b, amount);

                break;

            case 2:
                printf("\n\n---------------------\n");
                printf("    2. DATA DISPLAY");

                check = ch(amount);
                if(check == 1)
                    display(a, b, amount);
                else {
                    printf("\n Error!\n");
                    return(1);
                }

                break;

            case 3:
                printf("\n\n---------------------\n");
                printf("    3. THE SUM");

                check = ch(amount);
                if(check == 1) {
                    display(a, b, amount);

                    sum(a, b, amount);
                } else {
                    printf("\n Error!\n");
                    return(1);
                }

                break;

            case 4:
                printf("\n\n---------------------\n");
                printf("    4. THE SUBTRACTION");

                check = ch(amount);
                if(check == 1) {
                    display(a, b, amount);

                    printf("\n Enter the number of the 1st element: ");
                    scanf(" %d", &index_1);

                    printf(" Enter the number of the 2nd element: ");
                    scanf(" %d", &index_2);

                    index_1 = id(a, b, index_1);
                    index_2 = id(a, b, index_2);

                    result = index_1 - index_2;
                    printf("\n The subtraction is = %d\n", result);
                } else {
                    printf("\n Error!\n");
                    return(1);
                }

                break;

            case 5:
                printf("\n\n---------------------\n");
                printf("    5. THE MULTIPLICATION");

                check = ch(amount);
                if(check == 1) {
                    display(a, b, amount);

                    multipl(a, b, amount);
                } else {
                    printf("\n Error!\n");
                    return(1);
                }

                break;

            case 6:
                printf("\n\n---------------------\n");
                printf("    5. THE DIVISION");

                check = ch(amount);
                if(check == 1) {
                    display(a, b, amount);

                    printf("\n Enter the number of the 1st element: ");
                    scanf(" %d", &index_1);

                    printf(" Enter the number of the 2nd element: ");
                    scanf(" %d", &index_2);

                    index_1 = id(a, b, index_1);
                    index_2 = id(a, b, index_2);

                    result = index_1 / index_2;
                    printf("\n The division is = %d\n", result);
                } else {
                    printf("\n Error!\n");
                    return(1);
                }

                break;

            case 7:
                printf("\n\n---------------------\n");
                printf("    5. DATA DELETION");

                free(b);
                amount = 0;

                printf("\n\n Data deletion succeeded!\n");

                break;
        }
    } while(option != 0);

    return 0;
}
