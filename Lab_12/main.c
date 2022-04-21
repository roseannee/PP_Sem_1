#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\n\n---------------------\n"
           "    MENU\n\n"
           " 1. Fill the array with a given number\n"
           " 2. Display the array\n"
           " 3. Entry a number in the given position\n"
           " 4. Display a number from the given position\n"
           " 5. Fill the row with numbers (from the given)\n"
           " 6. Fill the column with numbers (from the given)\n"
           " 7. Calculate the sum in the row\n"
           " 8. Calculate the sum in the column\n"
           " 9. Calculate the sum in the array\n"
           " 10. Calculate the sum of the diagonals\n"
           " 11. Display a section of the array (-)\n"
           " 0. End\n");

     printf(" Enter the number here: ");
}

int main()
{
    printf("\n\n MULTIDIMENSIONAL ARRAYS");

    int option;

    const int ROW = 5, COL = 5;
    int array[ROW][COL];
    int number;

    int row_3;
    int col_3;
    int case_3_number;

    int row_5;
    int case_5_number;

    int col_6;
    int case_6_number;

    int row_sum = 0;
    int col_sum = 0;

    int sum = 0;

    int rd_sum = 0;
    int ld_sum = 0;

    int i, j;

    do{
        menu();
        scanf(" %d", &option);
        switch(option) {
            case 1:
                printf("\n\n---------------------\n");
                printf("    1. FILL THE ARRAY");

                printf("\n\n Enter your number : ");
                scanf(" %d", &number);

                for (i = 0; i < ROW; i++) {
                    for (j = 0; j < COL; j++)
                        array[i][j] = number;
                }

                printf("\n--- Completed!\n");

                break;

            case 2:
                printf("\n\n---------------------\n");
                printf("    2. DISPLAY THE ARRAY");

                printf("\n\n");

                for(i = 0; i < ROW; i++) {
                  printf("\n");

                  for(j = 0; j < COL; j++)
                       printf(" %d\t", array[i][j]);
                       printf("\n");
                }

                printf("\n--- Completed!\n");

                break;

            case 3:
                printf("\n\n---------------------\n");
                printf("    3. ENTRY A NUMBER");

                printf("\n\n Enter the row : ");
                scanf(" %d", &row_3);

                printf(" Enter the column : ");
                scanf(" %d", &col_3);

                printf(" Enter the new number : ");
                scanf(" %d", &case_3_number);

                printf("\n--- Completed!\n");

                break;

            case 4:
                printf("\n\n---------------------\n");
                printf("    4. DISPLAY A NUMBER");

                row_3--;
                col_3--;

                array[row_3][col_3] = case_3_number;

                printf("\n\n Now : %d", array[row_3][col_3]);

                break;

            case 5:
                printf("\n\n---------------------\n");
                printf("    5. FILL THE ROW");

                printf("\n\n Enter the row : ");
                scanf(" %d", &row_5);

                row_5--;

                printf(" Enter the number : ");
                scanf(" %d", &case_5_number);

                for(j = 0; j < COL; j++)
                    array[row_5][j] = case_5_number;

                printf("\n--- Completed!\n");

                break;

            case 6:
                printf("\n\n---------------------\n");
                printf("    6. FILL THE COLUMN");

                printf("\n\n Enter the column : ");
                scanf(" %d", &col_6);

                col_6--;

                printf(" Enter the number : ");
                scanf(" %d", &case_6_number);

                for(i = 0; i < ROW; i++)
                    array[i][col_6] = case_6_number;

                printf("\n--- Completed!\n");

                break;

            case 7:
                printf("\n\n---------------------\n");
                printf("    7. CALCULATE THE ROW SUM");

                printf("\n\n Enter the row : ");
                scanf(" %d", &row_5);

                row_5--;

                for(j = 0; j < COL; j++)
                    row_sum += array[row_5][j];

                printf(" The row sum is : %d", row_sum);

                printf("\n\n--- Completed!\n");

                break;

            case 8:
                printf("\n\n---------------------\n");
                printf("    8. CALCULATE THE COLUMN SUM");

                printf("\n\n Enter the column : ");
                scanf(" %d", &col_6);

                col_6--;

                for(i = 0; i < ROW; i++)
                    col_sum += array[i][col_6];

                printf(" The column sum is : %d", col_sum);

                printf("\n\n--- Completed!\n");

                break;

            case 9:
                printf("\n\n---------------------\n");
                printf("    9. CALCULATE THE WHOLE SUM");

                for (i = 0; i < ROW; i++) {
                    for (j = 0; j < COL; j++)
                        sum += array[i][j];
                }

                printf("\n\n The sum is : %d", sum);

                break;

            case 10:
                printf("\n\n---------------------\n");
                printf("    10. CALCULATE THE DIAGONALS SUM");

                for (i = 0; i < ROW; i++) {
                    for (j = 0; j < COL; j++)
                        if(i == j)
                            rd_sum += array[i][j];
                }

                printf("\n\n The right diagonal sum is : %d", rd_sum);

                for (i = 0; i < ROW; i++) {
                    for (j = 0; j < COL; j++)
                        if(j == COL)
                            ld_sum += array[i][j];
                }

                printf("\n The left diagonal sum is : %d", rd_sum);

                break;

            case 11:
                printf("\n\n---------------------\n");
                printf("    11. DISPLAY A SECTION");



                break;
        }
    } while(option != 0);

    return 0;
}
