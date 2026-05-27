#include <stdio.h>
int main(){

    //Operatori Aritmetici --->   =, +, -, *, /, %, ++, --
    int x = 10;
    int y = 3;
    int z = 0;

    // z = x + y;  // Somma tra due variabili; Utilizziamo la variabile 'z' per conservare il risultato
    // z = x - y; // Differenza tra due variabili;
    // z = x * y; // Prodotto tra variabili;
    // z = x / y; // Rapporto tra variabili; Utilizzare tipo di dato float o double per precisione.
    // z = x % y; // Resto di un rapporto tra due variabili;
    //x++; // Incremento di 1 alla variabile; Li vedremo molto lavorando con i cicli loop
    //x--; // Decremento di 1 alla variabile; Li vedremo molto lavorando con i cicli loop


    // Come riassegnare un nuovo valore alla stessa variabile con gli operatori di assegnamento e incremento

    // Se volessi fare x = x + y oppure x = x + 8, ma volessi mantenere il codice pulito, ecco come fare:

    //x+=3; //Somma
    //x-=3; //Differenza
    //x*=3; //Prodotto
    x/=3; //Rapporto

    // In pratica, sono delle "scorciatoie" che rendono più semplici e pulito il codice.
    

    
    printf("Il risultato è: %d", x);


    return 0;
}