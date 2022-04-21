#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("Choose the option:\n"
           "1. Enter numbers.\n"
           "2. Display numbers.\n"
           "3. How many numbers are entered.\n"
           "4. Calculate sum.\n"
           "5. Calculate average.\n"
           "6. Change number.\n"
           "7. Remove the number from the end.\n"
           "8. Remove any number.\n"
           "9. Find max & min.\n"
           "10. Display statistics.\n");

     printf("Enter the number here: ");
}

void output(int a, int b[])
{
    for(int i = 0; i < a; i++)
        printf("%d ", b[i]);
}

int Sum(int a, int b[])
{
    int d = 0;
    for(int i = 0; i < a; i++)
        d += b[i];

    return d;
}

int main()
{
    int option_1;

    int array[100];
    int numbers = 0;
    float sum = 0;
    float average;
    int position;
    int new_num;
    int max;
    int min;
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    do{
        menu();
        scanf("%d", &option_1);

        switch(option_1) {

            case 1:
                printf("\nEnter the numbers: ");

                do {
                    scanf("%d", &array[numbers]);
                    numbers++;
                } while (array[numbers - 1] != 0);
                numbers--;

                printf("\n");
                break;

            case 2:
                printf("\nYou entered: ");
                output(numbers, array);

                printf("\n\n");
                break;

            case 3:
                printf("\nIn total you entered %d numbers", numbers);

                printf("\n\n");
                break;

            case 4:
                printf("\nYour numbers are: ");
                output(numbers, array);

                sum = Sum(numbers, array);
                printf("\nSum = %.2f", sum);

                printf("\n\n");
                break;

            case 5:
                printf("\nYour numbers are: ");
                output(numbers, array);

                sum = Sum(numbers, array);

                average = (sum / numbers);
                printf("\nAverage = %.2f", average);

                printf("\n\n");
                break;

            case 6:
                printf("\nWhich number do you want to change?: ");
                output(numbers, array);
                printf("\nEnter the number position: ");
                scanf("%d", &position);

                printf("Enter new number: ");
                scanf("%d", &new_num);

                array[position - 1] = new_num;

                printf("\nNumbers after: ");
                output(numbers, array);

                printf("\n\n");
                break;

            case 7:
                printf("\nNumbers before: ");
                output(numbers, array);
                numbers--;

                printf("\nNumbers after: ");
                output(numbers, array);

                printf("\n\n");
                break;

            case 8:
                printf("\nWhich number do you want to remove?: ");
                output(numbers, array);
                printf("\nEnter the number position: ");
                scanf("%d", &position);
                numbers--;
                for(int i = position - 1; i < numbers; i++)
                    array[i] = array[i + 1];

                printf("Numbers after: ");
                output(numbers, array);

                printf("\n\n");
                break;

            case 9:
                printf("\nYour numbers are: ");
                output(numbers, array);

                max = array[0];
                min = array[0];

                for(int i = 1; i < numbers; i++){
                    if(max < array[i])
                        max = array[i];
                    else if(min > array[i])
                        min = array[i];
                }

                printf("\n\nMax = %d", max);
                printf("\nMin = %d", min);

                printf("\n\n");
                break;

            case 10:
                printf("\nYour numbers are: ");
                output(numbers, array);

                for(int i = 0; i < numbers; i++){
                    if(array[i] % 2 == 0)
                        even++;
                    else
                        odd++;

                    if(array[i] > 0)
                        pos++;
                    else
                        neg++;
                }

                printf("\n\nEven = %d\n", even);
                printf("Odd = %d\n", odd);
                printf("Positive = %d\n", pos);
                printf("Negative = %d\n", neg);

                printf("\n");
                break;

            default:
                printf("\nThe wrong number. Please try again later.\n");
                return(0);
        }
    } while(option_1 != 0);
        return 0;
}
