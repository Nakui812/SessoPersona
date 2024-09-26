#include <stdio.h>

int main(void) {
    char genere;
    char nome;
    printf("Inserisci il tuo nome e il tuo genere con M o F: \n");
    scanf("%s %c", nome, &genere);
    if (genere == 'M') {
        printf("Ciao Signor %s!\n", nome);
    }
    else {
        printf("Ciao Signora %s!\n", nome);
    }
    return 0;
}
