#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("Choose the figure I need to draw:\n"
           "1. Horizontal line.\n"
           "2. Vertical line.\n"
           "3. Filled rectangle.\n"
           "4. Horizontal line moved away from the left side.\n"
           "5. Vertical line moved away from the left side.\n"
           "6. Filled rectangle moved away from the left side.\n"
           "7. Empty rectangle moved away from the left side.\n"
           "8. Diagonal line.\n"
           "9. Right-angled triangle.\n");

     printf("Enter the number here: ");
}

void end()
{
    printf("\n\nDo you want to continue the program or exit?\n"
           "1. Continue.\n"
           "2. Exit.\n");
    printf("Enter the number here: ");
}

//case 1
void horizontal_line(int length, char sign)
{
    for(int i = 0; i < length; i++)
        printf("%c", sign);
}

//case 2
void vertical_line(int length, char sign)
{
   for(int i = 0; i < length; i++)
        printf("%c\n", sign);
}
//case 3
void filled_rectangle(int length, int side, char sign)
{
    for(int i = 0; i < side; i++){
        printf("\n");
        for(int j = 0; j < length; j++)
            printf("%c", sign);
    }
}

//case 4
void horizontal_line_left(int length, int gap, char sign)
{
    for(int i = 0; i < gap; i++)
        printf(" ");
    for(int j = 0; j < length; j++)
        printf("%c", sign);
}

//case 5
void vertical_line_left(int length, int gap, char sign)
{
    for(int i = 0; i < length; i++){
        for(int j = 0; j < gap; j++){
            printf(" ");
        }
        printf("%c\n", sign);
    }
}

//case 6
void filled_rectangle_left(int length, int side, int gap, char sign)
{
    for(int k = 0; k < side; k++){
        for(int i = 0; i < gap; i++)
            printf(" ");
        for(int j = 0; j < length; j++)
            printf("%c", sign);
        printf("\n");
    }
}

//case 7
/*void empty_rectangle_left(int gap, int side, int length, char sign)
{
    for(int i = 0; i < gap; i++){
        for(int g = 0; g < side; g++)
            printf(" ");
        if(i = 0 || i == gap-1){
            for(int j = 0; j < side; j++)
                printf("%c", sign);
        } else {
            printf("%c", sign);
            for(int j = 0; j < side-2; j++)
                printf(" ");
            printf("%c", sign);
        }
        printf("\n");
    }
}*/

//case 8
void diagonal_line(int length, char sign)
{
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++)
            printf(" ");
        printf("%c\n", sign);
    }
}

//case 9
void right_angled_triangle(int length, char sign)
{
    for(int i = 0; i < length; i++){
        for(int j = 0; j <= i; j++)
            printf("%c", sign);
        printf("\n");
    }
}

int main()
{
    int length;
    int height;
    int side;
    int gap;

    menu();
    int number_1;
    scanf("%d", &number_1);
    switch(number_1) {
        case 1:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("It'll look like this:\n");
            horizontal_line(length, '$');

            break;

        case 2:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("It'll look like this:\n");
            vertical_line(length, '$');

            break;

        case 3:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("Give the side: ");
            scanf("%d", &side);
            printf("It'll look like this:");
            filled_rectangle(length, side, '$');

            break;

        case 4:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("Give the gap: ");
            scanf("%d", &gap);
            printf("It'll look like this:\n");
            horizontal_line_left(length, gap, '$');

            break;

        case 5:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("Give the gap: ");
            scanf("%d", &gap);
            printf("It'll look like this:\n");
            vertical_line_left(length, gap, '$');

            break;

        case 6:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("Give the side: ");
            scanf("%d", &side);
            printf("Give the gap: ");
            scanf("%d", &gap);
            printf("It'll look like this:\n");
            filled_rectangle_left(length, side, gap, '$');

            break;

        /*case 7:
            printf("\nGive the gap: ");
            scanf("%d", &gap);
            printf("Give the side: ");
            scanf("%d", &side);
            printf("Give the length: ");
            scanf("%d", &length);
            printf("It'll look like this:\n");
            empty_rectangle_left(gap, side, length, '$');

            break;*/

        case 8:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("It'll look like this:\n");
            diagonal_line(length, '$');

            break;

        case 9:
            printf("\nGive the length: ");
            scanf("%d", &length);
            printf("It'll look like this:\n");
            right_angled_triangle(length, '$');

            break;

        default:
            printf("\nThe wrong number. Please try again later.\n");
            return(0);
    }
    //---
    end();
    int number_2;
    scanf("%d", &number_2);
    switch(number_2){
        case 1:
            printf("\n");
            main();

            break;

        case 2:
            printf("\nLogging out... Please press Enter.\n");

            break;

        default:
            printf("\nThe wrong number. Please try again later.\n");
   }
    return 0;
}
