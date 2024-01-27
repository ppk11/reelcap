#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define MAX_D 999999999999999

int main(int argc, char *argv[]) {
    if (argc >= 5) {
        printf("Za duzo argumentow:\n./nazwa_pliku x y z\nGdzie:\nx - srednica zylki podana na szpuli w mm\ny - dlugosc zylki podana na szpili w m\nz - srednica naszej zylki w mm\nMaksymalna liczba mozliwa do wprowadzenia - 999999999999999\n");
        exit(EXIT_FAILURE);

    } else if (argc < 4) {
        printf("Za malo argumentow:\n./nazwa_pliku x y z\nGdzie:\nx - srednica zylki podana na szpuli w mm\ny - dlugosc zylki podana na szpili w m\nz - srednica naszej zylki w mm\nMaksymalna liczba mozliwa do wprowadzenia - 999999999999999\n");
        exit(EXIT_FAILURE);

    } else {
        double srednica1, srednica2, dlugosc;
        srednica1 = strtod(argv[1], ((void*)0)); srednica2 = strtod(argv[3], ((void*)0)); dlugosc = strtod(argv[2], ((void*)0));
        if (srednica1 > MAX_D || srednica1 <= 0 || srednica2 > MAX_D || srednica2 <= 0 || dlugosc > MAX_D || dlugosc <= 0) {
            printf("Blad:\n./nazwa_pliku x y z\nGdzie:\nx - srednica zylki podana na szpuli w mm\ny - dlugosc zylki podana na szpili w m\nz - srednica naszej zylki w mm\nMaksymalna liczba mozliwa do wprowadzenia - 999999999999999\n\n");
            exit(EXIT_FAILURE);
        } else {
            double x = (3.14*(pow((srednica1),2))*dlugosc);
            double y = pow(srednica2,2)*3.14;
            printf("Wynik: %.lfm\n", x/y);
        }
    }
    return EXIT_SUCCESS;
}
