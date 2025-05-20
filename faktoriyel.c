#include <stdio.h>
int main(){
    
    int n, faktor=1;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz.");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
       faktor*=i; 
    }
    printf("Sayının faktoriyeli: %d", faktor);
    return 0;
}
