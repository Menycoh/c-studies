#include <stdio.h>

int main(void) {
    // =========================================================================
    // SPECIFICATORI DI FORMATO (I SEGNAPOSTO)
    // =========================================================================
    // Token speciali che cominciano col simbolo '%', seguiti da un carattere
    // che specifica il tipo di dato e da modifiche opzionali (larghezza, 
    // precisione, flag). Dicono al computer come interpretare e mostrare 
    // i bit presenti in memoria.
    
    int age = 25;
    float price = 19.99f;
    double pi = 3.1415926535;
    char grade = 'A';              // Il tipo 'char' singolo (usa gli apici singoli '')
    char currency[] = "EUR";       // Stringa di caratteri (usa le virgolette "")
    char name[] = "Domenico Di Tella";

    printf("--- ELENCO SPECIFICATORI BASE ---\n");
    printf("Intero (%%d): %d\n", age);
    printf("Float (%%f): %.2f\n", price);
    printf("Double (%%f o %%lf): %.10f\n", pi);
    
    // ESEMPIO MANCANTE: Ecco come si usa davvero il %c con un char singolo!
    printf("Carattere singolo (%%c): %c\n", grade); 
    
    printf("Stringa (%%s): %s\n", name);
    printf("Valuta (%%s): %s\n", currency);
    
    
    // =========================================================================
    // LARGHEZZA (WIDTH)
    // =========================================================================
    // Specifica il numero MINIMO di caratteri che il valore deve occupare.
    // Se il dato occupa meno spazio, vengono aggiunti spazi vuoti a sinistra.
    
    printf("\n--- FOCUS: LARGHEZZA ---\n");
    
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d (Allineato a 3 spazi)\n", num1); // Restituisce: "  1"
    printf("%3d (Allineato a 3 spazi)\n", num2); // Restituisce: " 10"
    printf("%3d (Allineato a 3 spazi)\n", num3); // Restituisce: "100"
    
    // Funziona anche con le stringhe (es. riserva 20 spazi allineando a destra)
    printf("%20s\n", name);


    // =========================================================================
    // PRECISIONE
    // =========================================================================
    // Si indica con un punto ('.') seguito da un numero. Cambia comportamento
    // radicalmente a seconda del tipo di dato:
    
    printf("\n--- FOCUS: PRECISIONE (ESEMPI MANCANTI) ---\n");

    // 1. Con i decimali (float/double): indica le cifre dopo la virgola
    float prezzo = 19.99f;
    printf("Decimali:  %.1f\n", prezzo); // Arrotonda e mostra una sola cifra: 20.0

    // 2. Con le stringhe (AGGIUNTO): indica il numero MASSIMO di caratteri (taglia)
    // Utile per stampare solo le iniziali o troncare testi lunghi
    printf("Stringa troncata (%%.8s): %.8s\n", name); // Stampa solo "Domenico"

    // 3. Con gli interi (AGGIUNTO): indica il numero MINIMO di cifre (mette gli zeri davanti)
    int ID = 42;
    printf("Intero con zeri (%%.5d):  %.5d\n", ID); // Stampa "00042"


    // =========================================================================
    // FLAG
    // =========================================================================
    // Modificano il comportamento visivo standard dell'output.
    
    printf("\n--- FOCUS: FLAG (ESEMPI MANCANTI) ---\n");
    
    int positivo = 50;
    int negativo = -50;

    // Flag '-' (MENO): Allinea a sinistra (il testo successivo si attacca subito)
    printf("Allineato a destra: |%10d|\n", positivo);
    printf("Allineato a sinistra ('-'): |%-10d|\n", positivo);
    
    // Flag '+' (PIU'): Forza la visualizzazione del segno anche se positivo
    printf("Senza flag piu': %d\n", positivo);
    printf("Con flag piu' ('+'): %+d e %+d\n", positivo, negativo);
    
    // Flag '0' (ZERO): Riempie gli spazi della larghezza con zeri anziche' spazi vuoti
    printf("Riempimento zeri ('0'): %05d\n", positivo); // Stampa "00050"
    
    // Flag ' ' (SPAZIO VUOTO): Lascia uno spazio davanti ai positivi per allinearli ai negativi
    printf("Spazio vuoto: % d\n", positivo);
    printf("Spazio vuoto: % d\n", negativo); // Noterai che i numeri rimangono allineati in colonna

    return 0;
}