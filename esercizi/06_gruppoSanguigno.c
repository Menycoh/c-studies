#include <stdio.h>
#include <string.h>

int main (){
    char gruppoSanguigno = '\0';
    char cittaResidenza [30] = "";

    printf("Inserisci il tuo gruppo sanguigno: ");
    scanf("%c",&gruppoSanguigno);

    printf("Inserisci la tua città di residenza: ");
    fgets(cittaResidenza, sizeof(cittaResidenza),stdin);
    getchar();
    printf("Riepilogo:\nGruppo sanguigno: %c\nCittà Residenza: %s", gruppoSanguigno, cittaResidenza);



return 0;
}