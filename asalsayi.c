#include <stdio.h>

int main() {
    int i, j, asal;

    printf("1 ile 10 arasindaki asal sayilar:\n");

    for(i = 2; i <= 10; i++) {
        asal = 1; // Başlangıçta asal olduğunu varsay
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                asal = 0; // Bölündüyse asal değildir
                break;
            }
        }

        if(asal == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
