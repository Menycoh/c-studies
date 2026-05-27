#include <stdio.h>
int main (){
    int age;
    char name[10];
    printf("Inserisci la tua età: ");
    scanf("%d", &age);

    printf("inserisci il tuo nome: ");
    scanf("%s", name);
getchar(); // Per consumare il carattere di nuova linea lasciato da scanf
    printf("Ciao! Hai %d anni e il tuo nome inizia con la lettera %c", age, name[0]);


return 0;
    



}