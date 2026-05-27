#include <stdio.h>

int main (){
    int età;
    printf("Quanti anni hai? ");
    scanf("%d", &età);

    if(età >= 18){
        printf("Accesso consentito, benvenuto!");
    } else {
        printf("Accesso negato, torna quando sarai maggiorenne.");
    }

    return 0;
}