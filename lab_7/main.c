#include <stdio.h>
#include <stdlib.h>

int i = 0;

void menu()
{
    printf("\n\nChoose the option:\n"
           "1. Add other points to the base.\n"
           "2. Display all entered points.\n"
           "3. Modification of the selected point (by index).\n"
           "4. Modification of the selected point (by name).\n"
           "5. Delete selected point (by name).\n"
           "6. Count the distance between two points (by name).\n"
           "7. Count the length of the broken line.\n");

     printf("Enter the number here: ");
}

typedef struct Punkt{
    char name;
    int x;
    int y;
} p[99];

int check(struct Punkt p[99], char symbol)
{
    int value = 0;
    for(int j = 0; j <= i; j++){
        if(p[j].name == symbol || symbol > 'Z' || symbol < 'A')
            value++;
    }

    return value;
}

void display(struct Punkt p[99])
{
    printf("\n\n");

    for(int j = 0; j < i; j++)
        printf("%c = (%d, %d)\n", p[j].name, p[j].x, p[j].y);
}

int case_4(struct Punkt p[99], char id_name)
{
    for(int j = 0; j <= i; j++)
        if(id_name == p[j].name)
            return j;
}

float distance(struct Punkt p[99], int index, int index_2)
{
    float dist;

    dist = sqrt((p[index_2].x - p[index].x) * (p[index_2].x - p[index].x) +
                + (p[index_2].y - p[index].y) * (p[index_2].y - p[index].y));

    return dist;
}

float calc_length(struct Punkt p[99])
{
    float result = 0;

    for(int j = 0; j < i - 1; j++)
        result += distance(p, j, j + 1);

    return result;
}

int main()
{
    int option;

    struct Punkt p[99];
    char symbol;
    int value;
    int index;
    int index_2;
    char id_name;
    char id_name_2;
    float length;

    do{
        menu();
        scanf(" %d", &option);
        switch(option) {
            case 1:
                printf("\n\nEnter the name: ");
                scanf(" %c", &symbol);

                value = check(p, symbol);
                if(value == 0){
                    p[i].name = symbol;

                    printf("Enter the X: ");
                    scanf(" %d", &p[i].x);

                    printf("Enter the Y: ");
                    scanf(" %d", &p[i].y);
                    i++;

                } else{
                    printf("\nThe wrong name. Please try again later.");
                    return(0);
                }

                break;

            case 2:
                display(p);

                break;

            case 3:
                display(p);

                printf("\n\nWhich point do you want to change?\n"
                       "Enter the number here: ");
                scanf("%d", &index);
                index--;

                printf("\nEnter the new name: ");
                scanf(" %c", &symbol);

                value = check(p, symbol);
                if(value == 0){
                    p[index].name = symbol;

                    printf("Enter the X: ");
                    scanf(" %d", &p[index].x);

                    printf("Enter the Y: ");
                    scanf(" %d", &p[index].y);

                } else{
                    printf("\nThe wrong name. Please try again later.");
                    return(0);
                }

                break;

            case 4:
                display(p);

                printf("\n\nWhich point do you want to change?\n"
                       "Enter the name here: ");
                scanf(" %c", &id_name);
                index = case_4(p, id_name);

                printf("\nEnter the new name: ");
                scanf(" %c", &symbol);

                value = check(p, symbol);
                if(value == 0){
                    p[index].name = symbol;

                    printf("Enter the X: ");
                    scanf(" %d", &p[index].x);

                    printf("Enter the Y: ");
                    scanf(" %d", &p[index].y);

                } else{
                    printf("\nThe wrong name. Please try again later.");
                    return(0);
                }

                break;

            case 5:
                display(p);

                printf("\n\nWhich point do you want to delete?\n"
                       "Enter the name here: ");
                scanf(" %c", &id_name);
                index = case_4(p, id_name);

                for(int j = index; j < i; j++){
                    p[j].name = p[j + 1].name;
                    p[j].x = p[j + 1].x;
                    p[j].y = p[j + 1].y;
                }
                i--;

                break;

            case 6:
                display(p);

                printf("\n\nEnter the name of the first point: ");
                scanf(" %c", &id_name);

                printf("Enter the name of the second point: ");
                scanf(" %c", &id_name_2);

                index = case_4(p, id_name);


                index_2 = case_4(p, id_name_2);

                length = distance(p, index, index_2);
                printf("Distance is %.2f", length);

                break;

            case 7:
                display(p);

                length = calc_length(p);
                printf("Length is: %.2f", length);

                break;

            default:
                printf("\nThe wrong number. Please try again later.\n");

            }
    } while(option != 0);

    return(0);
}
