#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int max = 100;

int main() {
    int correctPrice;
    int playerResponse = -1;
    int try = 10;

    srand(time(NULL));
    correctPrice = rand() % max;

    printf("Bienvenue sur JustePrixC !\n");

    while((try > 0) && (playerResponse != correctPrice)) {
        printf("--------------------------\n");
        printf("(%d essaie(s))\n", try);
        printf("Devinez le juste prix : ");
        scanf("%d", &playerResponse);

        if (playerResponse < correctPrice) {
            printf("Le juste prix est plus grand\n", try);
        } else if (playerResponse > correctPrice) {
            printf("Le juste prix est plus petit\n", try);
        }

        try--;
    }

    if (playerResponse == correctPrice) {
        printf("Félicitation vous avez trouvé le juste prix ! (%d)", playerResponse);
    } else {
        printf("Dommage ... Vous n'avez plus aucun essaie disponible");
    }

    return 0;
}
