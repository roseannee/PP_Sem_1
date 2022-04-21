#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Standardowe menu\n-----\n");
    printf("Please choose an option and press Enter:\n"
           "1. Option #1.\n"
           "2. Option #2.\n"
           "3. Option #3.\n"
           "4. Submenu #4.\n"
           "5. Submenu #5.\n\n");

    int option;
    scanf("%d", &option);
    switch(option){
        case 1: printf("You choose an option #1.\n\n");
                break;
        case 2: printf("You choose an option #2.\n\n");
                break;
        case 3: printf("You choose an option #3.\n\n");
                break;

        case 4:{
            printf("You choose a submenu #4.\nPlease choose a suboption and press Enter:\n"
                   "1. Suboption #1.1\n"
                   "2. Suboption #1.2\n"
                   "3. Exit\n\n");

            int suboption_4;
            scanf("%d", &suboption_4);
            switch(suboption_4){
                case 1: printf("You choose a suboption #1.1.\n\n");
                        break;

                case 2: printf("You choose a suboption #1.2.\n\n");
                        break;

                case 3: printf("Logging out... Please press Enter.\n");
                        return 0;

                default: printf("The wrong number. Please try again later.\n");
                        return 0;
            }
            break;
        }

        case 5:{
            printf("You choose a submenu #5.\nPlease choose a suboption and press Enter:\n"
                   "1. Suboption #2.1\n"
                   "2. Suboption #2.2\n"
                   "3. Exit\n\n");

            int suboption_5;
            scanf("%d", &suboption_5);
            switch(suboption_5){
                case 1: printf("You choose a suboption #2.1.\n\n");
                        break;

                case 2: printf("You choose a suboption #2.2.\n\n");
                        break;

                case 3: printf("Logging out... Please press Enter.\n");
                        return 0;

                default: printf("The wrong number. Please try again later.\n");
                        return 0;
            }
            break;
        }

        default: printf("The wrong number. Please try again later.\n");
                 return 0;
    }

    printf("Do you want to continue the program or exit?\n"
           "1. Continue.\n"
           "2. Exit.\n\n");

    int end;
    scanf("%d", &end);
    switch(end){
        case 1: main();
                break;
        case 2: printf("Logging out... Please press Enter.\n");
                break;
        default: printf("The wrong number. Please try again later.\n");
   }

    return 0;
}
