#include <stdio.h>
#include <stdlib.h>

//menu
void menu() {
    printf("Wybierz figure, ktora musze narysowac:\n"
           "1. Linie pozioma.\n"
           "2. Pojedynczy szlaczek.\n"
           "3. Prostokat.\n"
           "4. Kwadrat.\n"
           "5. Pojedynczy szlaczek premium.\n"
           "6. Szeroki szlaczek.\n"
           "7. Szachownice. //nie dziala\n");

    printf("Wpisz numer tutaj: ");
}

//case 1
void linia(int dlugosc, char znak) {
    for (int i = 0; i < dlugosc; i++) {
        printf("%c", znak);
    }
}

//case 2
void pojedynczy_szlaczek (int dlugosc, int ilosc_powtorzen) {
    char znak = '$';

    for(int i = 0; i < ilosc_powtorzen*2; i++){
        linia(dlugosc, znak);
        if(i % 2 == 0){
            znak = '*';
        }
        else{
            znak = '$';
        }
    }

}

//case 3
void prostokat (int dl_bok_a, int dl_bok_b, char znak) {
    for(int i = 0; i < dl_bok_b; i++) {
        linia(dl_bok_a, znak);
        printf("\n");
    }
}

//case 4
void kwadrat (int dl_boku, char znak) {
    prostokat(dl_boku, dl_boku, znak);
}

//case 5
void pojedynczy_szlaczek_premium (int dlugosc, int ilosc_powtorzen, char znak_1, char znak_2) {
    char znak = znak_1;

    for(int i = 0; i < ilosc_powtorzen*2; i++) {
        linia(dlugosc, znak);
        if(i % 2 == 0)
            znak = znak_2;
        else
            znak = znak_1;
    }
}

//case 6
void szeroki_szlaczek (int dlugosc, int ilosc_powtorzen, int grubosc, char znak_1, char znak_2) {
    for(int i = 0; i < grubosc; i++) {
        pojedynczy_szlaczek_premium(dlugosc, ilosc_powtorzen, znak_1, znak_2);
        printf("\n");
    }
}

//case 7 - nie dziala
/*void szachownica (int dlugosc, int ilosc_powtorzen, int grubosc, char znak_1, char znak_2) {
    for(int i = 0; i < grubosc; i++) {
        if(i == 0)
            szeroki_szlaczek(dlugosc, ilosc_powtorzen, grubosc, znak_1, znak_2);
        else
            szeroki_szlaczek(dlugosc, ilosc_powtorzen, grubosc, znak_2, znak_1);

    }
}*/

int main() {
    menu();
    // ---
    int numer;
    scanf("%d", &numer);
    switch(numer) {
        case 1:
            printf("\nTo bedzie wygladac tak:\n");
            linia(5, '$');
            break;
        case 2:
            printf("\nTo bedzie wygladac tak:\n");
            pojedynczy_szlaczek(5, 2);
            break;
        case 3:
            printf("\nTo bedzie wygladac tak:\n");
            prostokat(5, 2, '$');
            break;
        case 4:
            printf("\nTo bedzie wygladac tak:\n");
            kwadrat(5, '$');
            break;
        case 5:
            printf("\nTo bedzie wygladac tak:\n");
            pojedynczy_szlaczek_premium(5, 2, '$', '*');
            break;
        case 6:
            printf("\nTo bedzie wygladac tak:\n");
            szeroki_szlaczek(5, 2, 3, '$', '*');
            break;
        /*case 7 :
            printf("\nTo bedzie wygladac tak:\n");
            szachownica(5, 4, 3, '$', '*');*/
        default:
            printf("\nZly numer. Prosze sprobowac pozniej.\n");
            return(0);
    }
    // ---
    printf("\n\nCzy chcesz kontynuowac program czy wyjsc?\n"
           "1. Kontynuowac.\n"
           "2. Wyjsc.\n");
    printf("Wpisz opcje tutaj: ");

    int koniec;
    scanf("%d", &koniec);
    switch(koniec){
        case 1: {
                printf("\n");
                main();
                break;
        case 2: printf("\nWylogowanie sie... Prosze wcisnac Enter.\n");
                break;
        default: printf("\nZly numer. Prosze sprobowac pozniej.\n");
   }
    // ---
    return 0;
    }
}
