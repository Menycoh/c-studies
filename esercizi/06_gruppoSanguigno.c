#include <stdio.h>
#include <string.h>

int main (){

    char gruppoSanguigno = '\0';
    char cittàResidenza [30] = "";

    printf("Inserisci il tuo gruppo sanguigno: ");
    scanf("%c", &gruppoSanguigno);
    getchar();
    printf("Inserisci la tua città di residenza: ");
    fgets(cittàResidenza, sizeof(cittàResidenza), stdin);
    


    
    cittàResidenza[strcspn(cittàResidenza, "\n")] = '\0';
    printf("Riepilogo dati:\nGruppo Sanguigno = %c\nCittà Residenza = %s\n", gruppoSanguigno, cittàResidenza);
    return 0;
}