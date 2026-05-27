#include <stdio.h>
int main()
{
    char name[30] = "";
    float altezza = 0.0f;
    char sesso = '\0';
    
    
    printf("Inserisci il tuo nome: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Inserisci la tua altezza: ");
    scanf("%f", &altezza);
    printf("Inserisci il tuo sesso: ");
    scanf(" %c", &sesso);

    getchar();

    

    printf("Identikit Soggetto #1:\nNome Completo = %s\nAltezza = %.2fm\nSesso = %c", name, altezza, sesso);

    getchar();
    return 0;
}
