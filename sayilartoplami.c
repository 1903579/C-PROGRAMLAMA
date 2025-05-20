#include <stdio.h>
int main(){
    
    
    int sayi, toplam=0;
    
    for(int i=0; i<5; i++){
        printf("Sayi giriniz.");
        scanf("%d", &sayi);
        toplam+=sayi;
    }
    printf("Toplam= %d", toplam);
    
    
    return 0;
}
