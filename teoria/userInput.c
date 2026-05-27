#include <stdio.h>
#include <string.h> // STRATEGICO: Includiamo string.h per usare la funzione strcspn() per pulire il nome.

int main() {

    // 1. ALLOCAZIONE E INIZIALIZZAZIONE DELLE VARIABILI
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // '\0' ----> Terminatore nullo, ha valore ASCII pari a 0 (risulta come 0 in un'assegnazione INT).
    char name[30] = "";

    // 2. ACQUISIZIONE DATI PRIMITIVI (INTERI E FLOAT)
    // Inserire sempre un printf per capire quale sia la richiesta di input prima di bloccare il programma
    printf("Inserisci la tua eta': ");  
    
    // 'scanf' e' la funzione per l'input formattato. Il simbolo '&' e' l'operatore "indirizzo di".
    // Il C passa i parametri per valore (copiandoli), quindi scanf ha bisogno di sapere a che indirizzo si trova 
    // la variabile nella RAM per andare a modificare direttamente il valore digitato dall'utente.
    scanf("%d", &age);  
    printf("Eta' inserita: %d\n\n", age); // Reso l'output piu' leggibile

    printf("Inserisci la tua media voti (GPA): ");
    scanf("%f", &gpa);
    printf("Media inserita: %.2f\n\n", gpa);

    // 3. ACQUISIZIONE CARATTERE (GIOCO DEL BUFFER)
    printf("Inserisci il tuo ultimo voto (A/B/C/D/F): ");
    // TRICK 1: Lo spazio prima di %c indica a scanf di ignorare qualsiasi carattere di spaziatura 
    // (spazi, tabulazioni, andate a capo) rimasto precedentemente intrappolato nello stream di input.
    scanf(" %c", &grade); 
    printf("Voto inserito: %c\n\n", grade);

    // 4. ACQUISIZIONE STRINGA (PULIZIA AVANZATA)
    printf("Inserisci il tuo nome completo: ");
    
    // PULIZIA DEL BUFFER CON GETCHAR():
    // Lo scanf precedente (anche se aveva lo spazio prima di %c) lascia il carattere d'Invio ('\n') 
    // finale nel buffer nel momento in cui l'utente conferma il dato. 
    // Dobbiamo "inghiottirlo" con getchar(), altrimenti la successiva fgets leggera' quel 
    // vecchio Invio istantaneamente, credendo che l'utente abbia gia' premuto Invio a vuoto.
    getchar();

    // Per stringhe con spazi (nomi completi, frasi), usiamo 'fgets' invece di 'scanf' con %s.
    // Lo scanf tradizionale si stoppa al primo spazio bianco. 
    // NOTA DI ARCHITETTURA: 'name' non vuole il simbolo '&' perche' in C il nome di un array 
    // rappresenta gia' di per se' l'indirizzo di memoria del suo primo elemento (punto di partenza).
    fgets(name, sizeof(name), stdin); // sizeof(name) restituisce 30 byte: limite invalicabile anti-Buffer Overflow. 

    // TRICK 2: FIX DEL COMPORTAMENTO DI FGETS
    // fgets() include l'Invio ('\n') all'interno della stringa se c'e' spazio.
    // Usiamo strcspn per trovare la posizione di quel '\n' e lo sostituiamo con il terminatore nullo '\0'
    // per evitare andate a capo orfane quando stamperemo la stringa.
    //name[strcspn(name, "\n")] = '\0';

    printf("Nome completo memorizzato nella RAM: %s\n", name);

    return 0;
}