#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void menu() {
    printf("---MENU---\n");
    printf("Choose a topic:\n");
    printf("1. Activities with Rectangle.\n");
    printf("2. Activities with Triangle.\n");
    printf("3. Exit.\n\n");
}

int main() {
    printf("Hello! This is a program for calculating Areas and Perimeters of flat figures.\n\n");
    menu ();

    int activities;
    scanf("%d", &activities);
    switch(activities) {
        case 1: {
            printf("What would you like to calculate? Choose a number:\n");
            printf("1. The Area of a Rectangle.\n");
            printf("2. The Perimeter of a Rectangle.\n\n");

            int choise_rec;
            scanf("%d", &choise_rec);
            switch(choise_rec) {
                case 1: {
                    printf("The formula for the Area of a Rectangle is: A = a * b\n");

                    printf("Please enter the value of the side a: ");
                    float a;
                    scanf("%f", &a);

                    printf("Please enter the value of the side b: ");
                    float b;
                    scanf("%f", &b);

                    float area_rec;
                    area_rec = a * b;

                    printf("The Area of a Rectangle is: %.2f cm2\n\n", area_rec);

                    break;
                }
                case 2: {
                    printf("The formula for the Perimeter of a Rectangle is: P = 2 * (a + b)\n");

                    printf("Please enter the value of the side a: ");
                    float a;
                    scanf("%f", &a);

                    printf("Please enter the value of the side b: ");
                    float b;
                    scanf("%f", &b);

                    float perimeter_rec;
                    perimeter_rec = 2 * (a + b);

                    printf("The Perimeter of a Rectangle: is %.2f cm\n\n", perimeter_rec);

                    break;
                }
                default: {
                    printf("You entered the wrong number. Please try again later.\n\n");
                }
            }
            break;
        }
        case 2: {
            printf("What would you like to calculate? Choose a number:\n");
            printf("1. The Area of a Triangle.\n");
            printf("2. The Perimeter of a Triangle.\n\n");

            int choise_tri;
            scanf("%d", &choise_tri);
            switch(choise_tri) {
                case 1: {
                    printf("The formula for the Area of a Triangle is: A = 1/2 * (a * h)\n");

                    printf("Please enter the value of the side a: ");
                    float a;
                    scanf("%f", &a);

                    printf("Please enter the value of the height: ");
                    float h;
                    scanf("%f", &h);

                    float area_tri;
                    area_tri = 1.0 / 2.0 * (a * h);

                    printf("The Area of a Triangle is: %.2f cm2\n\n", area_tri);

                    break;
                }
                case 2: {
                    printf("The formula for the Perimeter of a Triangle is: P = a + b + c\n");

                    printf("Please enter the value of the side a: ");
                    float a;
                    scanf("%f", &a);

                    printf("Please enter the value of the side b: ");
                    float b;
                    scanf("%f", &b);

                    printf("Please enter the value of the side c: ");
                    float c;
                    scanf("%f", &c);

                    float perimeter_tri;
                    perimeter_tri = a + b + c;

                    printf("The Perimeter of a Rectangle is: %.2f cm\n\n", perimeter_tri);
                }
                default: {
                    printf("You entered the wrong number. Please try again later.\n\n");
                }
            }
            break;
        }
        case 3:
            break;
        default:
            printf("You entered the wrong number. Please try again later.\n\n");
    }
    return 0;
}
