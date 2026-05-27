#include <stdio.h>
#include <string.h>

int main (){

    char titoloLibro [50] = "";
    char nomeAutore [40] = "";
    int annoPubblicazione = 0;

    printf("Inserisci il titolo del libro: ");
    fgets(titoloLibro, sizeof(titoloLibro),stdin);

    titoloLibro[strcspn(titoloLibro, "\n")] = '\0';

    printf("Inserisci l'autore del libro: ");
    fgets(nomeAutore, sizeof(nomeAutore),stdin);
    nomeAutore[strcspn(nomeAutore, "\n")] = '\0';
    printf("Inserisci l'anno di pubblicazione: ");
    scanf("%d", &annoPubblicazione);

    
    nomeAutore[strcspn(nomeAutore, "\n")] = '\0';
    printf("\nLibro: \"%s\" scritto da %s (Anno: %d)\n", titoloLibro, nomeAutore, annoPubblicazione);


    return 0;


}