#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//---------------------------------------------------------------------------------------------------------------------------------------
void main_menu()
{
    printf("\n\n---------------------------\n"
           "    MAIN MENU\n\n"
           " 1. Conversion\n"
           " 2. Calculation\n"
           " 0. End\n\n");

     printf(" Choose the option : ");
}
//---------------------------------------------------------------------------------------------------------------------------------------
void conv()
{
    printf("\n\n---------------------------\n"
           "    CONVERSION\n\n"
           " 1. Decimal to Binary\n"
           " 2. Binary to Decimal\n\n"
           " 3. Decimal to Octal\n"
           " 4. Octal to Decimal\n\n"
           " 5. Decimal to Hexadecimal\n"
           " 6. Hexadecimal to Decimal\n\n"
           " 0. <-- Back to Main Menu\n\n");

     printf(" Choose the option : ");
}
//---------------------------------------------------------------------------------------------------------------------------------------
void calc()
{
    printf("\n\n---------------------------\n"
           "    CALCULATION\n\n"
           " 1. The Sum\n"
           " 2. The Subtraction\n"
           " 3. The Multiplication\n"
           " 4. The Division\n\n"
           " 0. <-- Back to Main Menu\n\n");

     printf(" Choose the option : ");
}
//---------------------------------------------------------------------------------------------------------------------------------------
int dec_to_bin(int dec_num)
{
    int bin_num[100];

	int i = 0;
	while (dec_num > 0) {
        bin_num[i] = dec_num % 2;
        dec_num /= 2;
        i++;
	}

	for (int j = i - 1; j >= 0; j--)
		printf("%d", bin_num[j]);

    return bin_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int bin_to_dec(int bin_num)
{
    int dec_num = 0;

    int i = 0;
    while(bin_num > 0) {
        int last_digit = bin_num % 10;
        bin_num /= 10;

        dec_num += last_digit * pow(2, i); // 2^0
        i++;
    }

    return dec_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int dec_to_oct(int dec_num)
{
    int oct_num[100];

    int i = 0;
    while (dec_num > 0) {
        oct_num[i] = dec_num % 8;
        dec_num /= 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", oct_num[j]);

    return oct_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int oct_to_dec(int oct_num)
{
    int dec_num = 0;

    int i = 0;
    while(oct_num > 0) {
        int last_digit = oct_num % 10;
        oct_num /= 10;

        dec_num += last_digit * pow(8, i); // 8^0
        i++;
    }

    return dec_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int dec_to_hex(int dec_num)
{
    char hex_num[100];
    int remainder;

    int i, j = 0;
    while (dec_num > 0) {
        remainder = dec_num % 16;
        if (remainder < 10)
            hex_num[j++] = 48 + remainder;
        else
            hex_num[j++] = 55 + remainder;
        dec_num /= 16;
    }

    for (i = j; i >= 0; i--)
        printf("%c", hex_num[i]);

    return hex_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int hex_to_dec(char hex_num[17])
{
    int dec_num = 0;

    int i = 0, value, length;

    length = strlen(hex_num);
    length--;

    for(i = 0; hex_num[i] != '\0'; i++) {
        if(hex_num[i] >= '0' && hex_num[i] <= '9')
            value = hex_num[i] - 48;

        else if(hex_num[i] >= 'a' && hex_num[i] <= 'f')
            value = hex_num[i] - 97 + 10;

        else if(hex_num[i] >= 'A' && hex_num[i] <= 'F')
            value = hex_num[i] - 65 + 10;

        dec_num += value * pow(16, length);
        length--;
    }

    return dec_num;
}
//---------------------------------------------------------------------------------------------------------------------------------------
void first()
{
    printf("\n\n Choose a numeral system for the first number :\n"
           " 1. Decimal\n"
           " 2. Binary\n"
           " 3. Octal\n"
           " 4. Hexadecimal\n");
}
//---------------------------------------------------------------------------------------------------------------------------------------
void second()
{
    printf("\n\n Choose a numeral system for the second number :\n"
           " 1. Decimal\n"
           " 2. Binary\n"
           " 3. Octal\n"
           " 4. Hexadecimal\n");
}
//---------------------------------------------------------------------------------------------------------------------------------------
void print()
{
    printf("\n\n Choose a numeral system to print the result :\n"
           " 1. Decimal\n"
           " 2. Binary\n"
           " 3. Octal\n"
           " 4. Hexadecimal\n");
}
//---------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    printf("\n\n---------------------------\n"
           "    PROJECT");

    int option;
    int option_1;
    int option_2;

    int dec_num;
    int bin_num;
    int oct_num;
    int hex_num[17];

    int system_1;
    int system_2;
    int print_result;

    int result;
    float res;
    int num_1;
    int num_2;
    float num_1_1;
    float num_2_2;

    do {
        main_menu();
        scanf(" %d", &option);
        switch(option) {
//---------------------------------------------------------------------------------------------------------------------------------------
            case 1:
                do {
                    conv();
                    scanf(" %d", &option_1);
                    switch(option_1) {
                //----------------------------------------------------------------------
                        case 1:
                            printf("\n\n---------------------------\n");
                            printf("    1. DECIMAL TO BINARY");

                            printf("\n");

                            do {
                                printf("\n Input Decimal number: ");
                                scanf(" %d", &dec_num);
                            } while(dec_num <= 0);

                            printf(" Output Binary number : ");
                            dec_to_bin(dec_num);

                            break;
                //----------------------------------------------------------------------
                        case 2:
                            printf("\n\n---------------------\n");
                            printf("    2. BINARY TO DECIMAL");

                            printf("\n");

                            do {
                                printf("\n Input Binary number : " );
                                scanf(" %d", &bin_num);
                            } while(bin_num <= 0);

                            printf(" Output Decimal number : %d\n", bin_to_dec(bin_num));

                            break;
                //----------------------------------------------------------------------
                        case 3:
                            printf("\n\n---------------------\n");
                            printf("    3. DECIMAL TO OCTAL");

                            printf("\n");

                            do {
                                printf("\n Input Decimal number : " );
                                scanf(" %d", &dec_num);
                            } while(dec_num <= 0);

                            printf(" Output Octal number: ");
                            dec_to_oct(dec_num);

                            break;
                //----------------------------------------------------------------------
                        case 4:
                            printf("\n\n---------------------\n");
                            printf("    4. OCTAL TO DECIMAL");

                            printf("\n");

                            do {
                                printf("\n Input Octal number : " );
                                scanf(" %d", &oct_num);
                            } while(oct_num <= 0);

                            printf(" Output Decimal number : %d\n", oct_to_dec(oct_num));

                            break;
                //----------------------------------------------------------------------
                        case 5:
                            printf("\n\n---------------------\n");
                            printf("    5. DECIMAL TO HEXADECIMAL");

                            printf("\n");

                            do {
                                printf("\n Input Decimal number : ");
                                scanf(" %d", &dec_num);
                            } while(dec_num <= 0);

                            printf(" Output Hexadecimal number :");
                            dec_to_hex(dec_num);

                            break;
                //----------------------------------------------------------------------
                        case 6:
                            printf("\n\n---------------------\n");
                            printf("    6. HEXADECIMAL TO DECIMAL");

                            printf("\n\n Input Hexadecimal number : ");
                            scanf(" %[^\n]s", hex_num);

                            printf(" Output Decimal number : %d", hex_to_dec(hex_num));

                            break;
                //----------------------------------------------------------------------
                        case 0:
                            main();
                            break;
                //----------------------------------------------------------------------
                        default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                    }
                } while(option_1 != 0);
                break;
//---------------------------------------------------------------------------------------------------------------------------------------
            case 2:
                do {
                    calc();
                    scanf(" %d", &option_2);
                    switch(option_2) {
        //-----------------------------------------------------------------------------------------------
                        case 1:
                        printf("\n\n---------------------\n");
                        printf("    1. THE SUM");
                //----------------------------------------------------------------------
                        first();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_1);
                        switch(system_1) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_1 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_1 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_1 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_1 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        second();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_2);
                        switch(system_2) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_2 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_2 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_2 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_2 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        result = num_1 + num_2;
                //----------------------------------------------------------------------
                        print();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &print_result);
                        switch(print_result) {
                            case 1:
                                printf("\n\n The sum in Decimal numeral system is : %d", result);

                                break;

                            case 2:
                                printf("\n\n The sum in Binary numeral system is : ");
                                dec_to_bin(result);

                                break;

                            case 3:
                                printf("\n\n The sum in Octal numeral system is : ");
                                dec_to_oct(result);

                                break;

                            case 4:
                                printf("\n\n The sum in Hexadecimal numeral system is : ");
                                dec_to_hex(result);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                        break;
        //-----------------------------------------------------------------------------------------------
                    case 2:
                        printf("\n\n---------------------\n");
                        printf("    2. THE SUBTRACTION");
                //----------------------------------------------------------------------
                        first();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_1);
                        switch(system_1) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_1 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_1 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_1 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_1 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        second();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_2);
                        switch(system_2) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_2 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_2 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_2 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_2 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        result = num_1 - num_2;
                //----------------------------------------------------------------------
                        print();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &print_result);
                        switch(print_result) {
                            case 1:
                                printf("\n The subtraction in Decimal numeral system is : %d", result);

                                break;

                            case 2:
                                printf("\n The subtraction in Binary numeral system is : ");
                                dec_to_bin(result);

                                break;

                            case 3:
                                printf("\n The subtraction in Octal numeral system is : ");
                                dec_to_oct(result);

                                break;

                            case 4:
                                printf("\n The subtraction in Hexadecimal numeral system is : ");
                                dec_to_hex(result);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                        break;
        //-----------------------------------------------------------------------------------------------
                    case 3:
                        printf("\n\n---------------------\n");
                        printf("    3. THE MULTIPLICATION");
                //----------------------------------------------------------------------
                        first();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_1);
                        switch(system_1) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_1 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_1 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_1 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_1 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        second();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_2);
                        switch(system_2) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_2 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_2 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_2 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_2 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        result = num_1 * num_2;
                //----------------------------------------------------------------------
                        print();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &print_result);
                        switch(print_result) {
                            case 1:
                                printf("\n The multiplication in Decimal numeral system is : %d", result);

                                break;

                            case 2:
                                printf("\n The multiplication in Binary numeral system is : ");
                                dec_to_bin(result);

                                break;

                            case 3:
                                printf("\n The multiplication in Octal numeral system is : ");
                                dec_to_oct(result);

                                break;

                            case 4:
                                printf("\n The multiplication in Hexadecimal numeral system is : ");
                                dec_to_hex(result);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                        break;
        //-----------------------------------------------------------------------------------------------
                    case 4:
                        printf("\n\n---------------------\n");
                        printf("    4. THE DIVISION");
                //----------------------------------------------------------------------
                        first();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_1);
                        switch(system_1) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_1_1 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_1_1 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_1_1 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_1_1 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        second();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &system_2);
                        switch(system_2) {
                            case 1:
                                printf("\n");

                                do {
                                    printf("\n Input Decimal number : ");
                                    scanf(" %d", &dec_num);
                                } while(dec_num <= 0);

                                num_2_2 = dec_num;

                                break;

                            case 2:
                                printf("\n");

                                do {
                                    printf("\n Input Binary number : ");
                                    scanf(" %d", &bin_num);
                                } while(bin_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", bin_to_dec(bin_num));

                                num_2_2 = bin_to_dec(bin_num);

                                break;

                            case 3:
                                printf("\n");

                                do {
                                    printf("\n Input Octal number : ");
                                    scanf(" %d", &oct_num);
                                } while(oct_num <= 0);

                                printf(" Your number in Decimal numeral system is : %d", oct_to_dec(oct_num));

                                num_2_2 = oct_to_dec(oct_num);

                                break;

                            case 4:
                                printf("\n Input Hexadecimal number : ");
                                scanf(" %[^\n]s", hex_num);

                                printf(" Your number in Decimal numeral system is : %d", hex_to_dec(hex_num));

                                num_2_2 = hex_to_dec(hex_num);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                //----------------------------------------------------------------------
                        res = num_1_1 / num_2_2;
                //----------------------------------------------------------------------
                        print();
                        printf("\n Enter the number here : ");
                        scanf(" %d", &print_result);
                        switch(print_result) {
                            case 1:
                                printf("\n The division in Decimal numeral system is : %f", res);

                                break;

                            case 2:
                                printf("\n The division in Binary numeral system is : ");
                                dec_to_bin(res);

                                break;

                            case 3:
                                printf("\n The division in Octal numeral system is : ");
                                dec_to_oct(res);

                                break;

                            case 4:
                                printf("\n The division in Hexadecimal numeral system is : ");
                                dec_to_hex(res);

                                break;

                            default:
                                printf("\n\n The wrong number. Please try again later.\n");
                                return(1);
                        }
                        break;
        //-----------------------------------------------------------------------------------------------
                    case 0:
                        main();
                        break;
        //-----------------------------------------------------------------------------------------------
                    default:
                            printf("\n\n The wrong number. Please try again later.\n");
                            return(1);
                }
                } while(option_2 != 0);
                break;
//---------------------------------------------------------------------------------------------------------------------------------------
            case 0:
                printf("\n\n Logging out...\n");
                return 0;

                break;
//---------------------------------------------------------------------------------------------------------------------------------------
            default:
                printf("\n\n The wrong number. Please try again later.\n");
                return(1);
        }
    } while(option != 0);

    return 0;
}
