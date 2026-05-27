#include <stdio.h> // DIRETTIVA PER IL PREPROCESSORE: Include la libreria Standard Input-Output.
                   // Serve alla CPU per riconoscere funzioni come printf() e scanf().

// int main(): È l'ENTRY POINT del programma. Ogni software in C inizia l'esecuzione da qui.
// "int" significa che la funzione deve restituire un numero intero al sistema operativo alla fine.
int main() {

    // COMMENTO A LINEA SINGOLA: Usato per note brevi. Non viene compilato.
    // This is my first program in C! E questo è un commento! :)
    
    // printf: Funzione di output. Manda i dati dallo stream di output al terminale.
    // '\n' è una sequenza di escape che indica il "Newline" (va a capo).
    printf("Hello World!\n"); 
    
    // DEBUG NOTE: Qui mancava il '\n'. Senza di esso, l'eventuale stampa successiva
    // si attaccherebbe sulla stessa riga nel terminale di Ubuntu.
    printf("Pizza is really good!\n"); 

    /*
     * COMMENTO MULTI-LINEA (o a blocco):
     * Utile per documentare intere funzioni, logiche complesse o l'architettura del file.
     * This is also a comment! :)
     */
    
    // return 0: Dice al Sistema Operativo (es. Ubuntu) che il programma è terminato con successo.
    // Se restituisse un numero diverso da 0 (es. 1, -1), indicherebbe un codice di errore (crash).
    return 0;
}