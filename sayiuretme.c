#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));

    while(1) {
        int sayi = 100 + rand() % 900;
        printf("Sayi: %d\n", sayi);
        
        int yuz = sayi / 100;
        int on = (sayi / 10) % 10;
        int bir = sayi % 10;

        if (yuz != on && yuz != bir && on != bir) {
            printf("yuz: %d\non: %d\nbir: %d\n", yuz, on, bir);
        } else {
            printf("Rakamları farklı değil\n");
        }

        // Sonsuz döngü olmaması için kullanıcıdan tuş bekleme
        printf("Devam etmek için bir tuşa basın...\n");
        getchar(); // Her adımda beklemesi için
    }

    return 0;
}
