#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int menu(int m)
{
    printf("---\n"
           "What would you like to calculate?\n"
           "1. The Perimeter of the Rectangle.\n"
           "2. The Area of the Rectangle.\n\n"
           "3. The Perimeter of the Square.\n"
           "4. The Area of the Square.\n\n"
           "5. The Area of the Cube.\n"
           "6. The Area of the Cuboid.\n\n"
           "7. Increase the letter.\n"
           "8. Czy litera.\n\n");

     printf("Enter the number here: ");
     scanf("%d", &m);
     return m;
}

void end()
{
    printf("\n\n\nDo you want to continue the program or exit?\n"
           "1. Continue.\n"
           "2. Exit.\n");
    printf("Enter the number here: ");
}

//case 1
int perimeter_rectangle(int a, int b)
{
    int perimeter = (2 * a) + (2 * b);

    return perimeter;
}

//case 2
int area_rectangle(int a, int b)
{
    int area = a * b;

    return area;
}

//case 3
int perimeter_square(int a)
{

    int perimeter = perimeter_rectangle(a, a);


    return perimeter;
}

//case 4
int area_square(int a)
{

    int area = area_rectangle(a, a);

    return area;
}

//case 5
int area_cube(int a)
{
    int area = area_square(a) * 6;

    return area;
}

//case 6
int area_cuboid(int a, int b, int c)
{
    int area_1 = area_rectangle(a, b) * 2;
    int area_2 = area_rectangle(b, c) * 2;
    int area_3 = area_rectangle(a, c) * 2;

    int area = area_1 + area_2 + area_3;

    return area;
}

int main()
{
    int m;
    int option;

    int a;
    int b;
    int c;

    option = menu(m);
    switch(option){
        case 1:
            printf("\n\nPlease enter the side length: ");
            scanf("%d", &a);
            printf("Please enter the side height: ");
            scanf("%d", &b);

            int per_rec = perimeter_rectangle(a, b);

            printf("Result is: %d", per_rec);

            break;

        case 2:
            printf("\n\nPlease enter the side length: ");
            scanf("%d", &a);
            printf("Please enter the side height: ");
            scanf("%d", &b);

            int area_rec = area_rectangle(a, b);

            printf("Result is: %d", area_rec);

            break;

        case 3:
            printf("\n\nPlease enter the length of the side a: ");
            scanf("%d", &a);

            int per_sq = perimeter_square(a);

            printf("Result is: %d", per_sq);

            break;

        case 4:
            printf("\n\nPlease enter the length of the side a: ");
            scanf("%d", &a);

            int area_sq = area_square(a);

            printf("Result is: %d", area_sq);

            break;

        case 5:
            printf("\n\nPlease enter the length of the side a: ");
            scanf("%d", &a);

            int area_cub = area_cube(a);

            printf("Result is: %d", area_cub);

            break;

        case 6:
            printf("\n\nPlease enter the length of the side a: ");
            scanf("%d", &a);
            printf("Please enter the length of the side b: ");
            scanf("%d", &b);
            printf("Please enter the length of the side c: ");
            scanf("%d", &c);

            int area_cubb = area_cuboid(a, b, c);

            printf("Result is: %d", area_cubb);

            break;

        case 7:

            break;

        case 8:

            break;

        default:
            printf("\nThe wrong number. Please try again later.\n");
            return(0);
    }

    end();
    int end;
    scanf("%d", &end);
    switch(end){
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
