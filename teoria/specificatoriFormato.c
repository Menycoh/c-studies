
#include <stdio.h>

int main() {
    // Specificatori di formato:
    // Sono token speciali che iniziano con il simbolo %,
    // seguito da un carattere che indica il tipo di dato.
    // Possono includere modifiche opzionali come larghezza, precisione e flags.
    // Agiscono come segnaposto: dicono al computer come interpretare e visualizzare i dati in memoria.

    int age = 25;
    float price = 19.99;
    double PI = 3.1415926535;
    char currency = '€';
    char name[] = "Domenico Di Tella";

    // Esempi base di specificatori di formato
    printf("La mia età è: %d\n", age);
    printf("Il prezzo di quel prodotto è: %.2f\n", price);
    printf("Il PI greco è: %lf\n", PI);
    printf("La valuta utilizzata in Italia è: L'%c\n", currency);
    printf("Il mio nome è: %s\n", name);

    // LARGHEZZA:
    // La larghezza si specifica con un numero tra % e il tipo di dato.
    // Indica il numero minimo di caratteri che il valore deve occupare.
    // Se il valore è più corto, viene riempito con spazi a sinistra.
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);  // Output: "  1" (2 spazi + 1)
    printf("%3d\n", num2);  // Output: " 10" (1 spazio + 10)
    printf("%3d\n", num3);  // Output: "100" (nessun spazio aggiunto)

    // La larghezza è applicabile anche ad altri tipi di dati, come float e double.
    float prezzo1 = 19.99;
    float prezzo2 = 32.99;
    float prezzo3 = 2.50;

    // PRECISIONE:
    // Si indica con un punto seguito da un numero.
    // Per i decimali: indica il numero di cifre dopo la virgola da visualizzare.
    // Per le stringhe: indica il numero massimo di caratteri da stampare (troncando la stringa se è più lunga).
    // Per gli interi: indica il numero minimo di cifre da mostrare (aggiungendo zeri all'inizio).
    printf("%.2f€\n", prezzo1);  // Output: "19.99€"
    printf("%.2f€\n", prezzo2);  // Output: "32.99€"
    printf("%.2f€\n", prezzo3);  // Output: "2.50€"

    // FLAGS:
    // Modificano il comportamento visivo standard dell'output.
    // I flags più comuni sono:
    // - (meno): allinea a sinistra nello spazio definito dalla larghezza (di default è a destra).
    // + (più): mostra il segno (+ o -) anche per i numeri positivi.
    // 0 (zero): riempie gli spazi vuoti della larghezza con zeri invece di spazi bianchi.
    // (spazio vuoto): lascia uno spazio prima dei numeri positivi (utile per allineare con numeri negativi).

    return 0;
}