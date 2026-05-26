#include <stdio.h>
#include <stdbool.h>
int main (){
    // variabile = contenitori di memoria, tipizzati e identificati da un nome (identificatore),
    //             che vengono utilizzati per: conservare e riutilizzare determinati valori
    //             a seconda dell'utilizzo.
    

    //TIPI DI DATI
    //int = numeri interi (4 bytes)
    //float = numero decimale a singola precisione (4 bytes)
    //double = numero decimale a doppia precisione (8 bytes)
    //char = carattere singolo (1 byte)
    //char[] = array di caratteri (dimensione può variare)
    //bool = dato binario, vero o falso. (1 byte, richiede #include <stdbool.h>)


    // Integers = numeri interi, positivi o negativi. Funziona a 16 bit e 32 bit. 
    // Ha un range di valori a seconda del tipo (short int/long int)
    // 16 bit = -32768 e 32767; 32 bit = -2147483648 e 2147483647
    int age = 21;
    int year = 2025;
    int quantity = 2;

    printf("Hai %d anni",age);
    printf("\nL'anno in cui siamo è: %d",year);
    printf("\nNel carrello hai: %d prodotto/i", quantity);


    // Floating numbers = numeri decimali a singola precisione (fino a 6 cifre dopo la virgola), positivi o negativi.
    float media_voti = 2.5;
    float price = 19.99;
    float temperatura = -20.2;

    printf("\nLa tua media dei voti è: %0.1f",media_voti);
    printf("\nIl prezzo è: %.2f€",price);
    printf("\nLa temperatura esterna è: %.1f°C",temperatura);

    // Double numbers = numeri decimali a doppia precisione (fino a 16 cifre dopo la virgola), positivi e negativi
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("\nIl PI greco è: %.15lf\n",pi);
    printf("IL valore di euler è: %.15lf\n",e);

    // Char = Singolo carattere ASCII che può essere una lettera, numero o simbolo.
    char voto = 'B';
    char simbolo = '!';
    char currency = '€';
    printf("\nIl voto che ho preso al test è: %c\n",voto);
    printf("Il simbolo preferito tuo è: %c\n",simbolo);
    printf("La moneta in Italia è %c\n",currency);

    /*In altri linguaggi di programmazione, è presente il tipo di dato "String"
    ovvero un insieme di caratteri che possono formare un nome o una frase qualunque.
    In C non è presente questo tipo di dato. 
    Per ottenerlo, utilizziamo un array di caratteri per rappresentare una stringa.
    [] <---- questo è l'inizio dell'array. Ne parleremo meglio nelle prossime lezioni*/

    char name [] = "Domenico Di Tella";
    char food [] = "Pizza";
    char email [] = "fake213@gmail.com";
    printf("Hello, %s!\n",name);
    printf("Your favorite food is %s\n", food);
    printf("My email is %s\n", email);

    /*Bool type = Significa boolean, derivato dall'algebra di Boole.
    Il bool è binario. Il dato conservato in esso può essere vero (1) o falso (0).
    Per funzionare, va inserito quest'altro header fie/direttiva del preprocessore:
    -#include <stdbool.h>
    La maggiorparte delle volte, il tipo di dato Bool viene utilizzato solo all'interno del programma,
    in funzioni già impostate, come l'esempio giù con gli IF e ELSE.*/
    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;
    if(forSale)  {
        printf("That item is for sale!!\n");
    }
    else{
        printf("That item is not for sale!\n");
    }
    return 0;
}