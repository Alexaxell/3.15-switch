#include <stdio.h>

int main() {
    char categoria;
    float PrezzoBiglietto;
    printf("inserisci la tua categoria: \n pensionati (P)\n");
    printf("studenti (S)\n");
    printf("disoccupati (D)\n");
    printf("inserisci la tua scelta:\n");
    scanf("%c", &categoria);
    printf("inserisci il prezzo del biglietto:");
    scanf("%f", &PrezzoBiglietto);

    switch(categoria) {
        case 'P':
            PrezzoBiglietto = PrezzoBiglietto * 0.10;
            printf("il Prezzo finale del biglietto è %.2f euro\n", PrezzoBiglietto);
            scanf("%f", &PrezzoBiglietto);
            break;
        case 'S':
            PrezzoBiglietto = PrezzoBiglietto * 0.15;
            printf("il Prezzo finale del biglietto è %.2f euro\n", PrezzoBiglietto);
            scanf("%f", &PrezzoBiglietto);
            break;
        case 'D':
            PrezzoBiglietto = PrezzoBiglietto * 0.25;
            printf("il Prezzo finale del biglietto è %.2f euro\n", PrezzoBiglietto);
            scanf("%f", &PrezzoBiglietto);
            break;
            return 0;
        default:
            printf("scelta non valida, riprovare");
    }
    return 0;
}
