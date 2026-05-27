#include <stdio.h>

int main (){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';      // '\0' ----> Terminatore nullo, ha valore ASCII pari a 0 (risulta come '0' in un'assegnazione INT)
    char name [30] = "";

    // Inserire sempre un printf per capire quale sia la richiesta di input prima di bloccare il programma
    printf("Inserisci la tua età: ");  

    // 'scanf' è la funzione per l'input formattato. Il simbolo '&' è l'operatore "indirizzo di".
    // La funzione 'scanf' non può capire quale sia la variabile e modificarla direttamente solo usando il nome;
    // il C passa i parametri per valore (copiandoli), quindi ha bisogno di sapere a che indirizzo si trova 
    // la variabile nella RAM per andare a modificare direttamente il valore digitato dall'utente.
    scanf("%d", &age);  

    printf("%d\n", age);       

    printf("Inserisci la tua media voti: ");
    scanf("%f", &gpa);

    printf("%.2f\n", gpa);

    printf("Inserisci il tuo ultimo voto: ");
    scanf(" %c", &grade); // Lo spazio prima di %c consuma eventuali spazi bianchi o Invio rimasti nel buffer

    printf("%c\n", grade);

    printf("Inserisci il tuo nome completo: ");
    
    // PULIZIA DEL BUFFER CON GETCHAR():
    // Lo scanf precedente ha lasciato un carattere d'Invio ('\n') nel buffer della tastiera.
    // Dobbiamo "inghiottirlo" con getchar() adesso, altrimenti la successiva fgets leggerà quel 
    // vecchio Invio e salterà la richiesta, senza far digitare nulla all'utente.
    getchar();

    // Per i nomi completi o combinazioni di più parole, usiamo 'fgets' invece di 'scanf'. 
    // Con lo scanf tradizionale (%s) non puoi scrivere un nome completo, perché lo scanf vede
    // lo spazio bianco come un separatore e si ferma alla prima parola.
    // 'fgets' è molto più comoda e safe: legge gli spazi e impedisce il Buffer Overflow grazie al parametro sizeof.
    fgets(name, sizeof(name), stdin);       // L'operatore 'sizeof' serve per restituire la dimensione totale in byte
                                            // allocata per la variabile 'name' (in questo caso, restituisce sempre 30),
                                            // dicendo a fgets qual è il limite invalicabile per non andare fuori memoria.                         

    printf("%s", name);

    return 0;
}