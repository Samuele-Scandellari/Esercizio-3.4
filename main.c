#include <stdio.h>

int main() {
    char nome, sesso;
    printf("Dati in input nome della persona \nsolo iniziale: ");
    scanf("%c", &nome);
    getchar();
    printf("sesso (M o F): ");
    scanf("%c", &sesso);
    if(sesso == 'M') {
        printf("Buongiorno signor %c\n", nome);
    }else {
        printf("Buongiorno signora %c\n", nome);
    }

    return 0;
}
