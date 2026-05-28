#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int somma = 0;
    int differenza = 0;
    int prodotto = 0;
    float quoziente = 0;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    somma = num1 + num2;
    printf("La somma e': %d\n", somma);
    differenza = num1 - num2;
    printf("La differenza e': %d\n", differenza);
    prodotto = num1 * num2;
    printf("Il prodotto e': %d\n", prodotto);
    quoziente = (float)num1 / (float)num2;
    printf("Il quoziente e': %.2f\n",quoziente);


    return 0;
}
