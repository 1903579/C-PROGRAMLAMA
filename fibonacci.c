#include <stdio.h>
int main(){
    
    int i, a, b, c;
    a=1;
    b=1;
    for(i=1; i<=10; i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\n", c);
    
    return 0;
}
