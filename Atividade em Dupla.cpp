#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	// Declarando variaveis.
	
	setlocale (LC_ALL,"");
    char disciplinas[3][50];
    float notas[3][3];
    int pesos[3][3];
    float medias[3];
    int i,j;

    // Recebendo os nomes das disciplinas
    printf("Digite o nome das tres disciplinas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome da disciplina %d: ", i + 1);
        scanf("%s", disciplinas[i]);
    }

    // Recebendo as notas e os pesos
    for (i = 0; i < 3; i++) {
        printf("\nDisciplina: %s\n", disciplinas[i]);
        for (j = 0; j < 3; j++) {
            printf("%da nota: ", j + 1);
            scanf("%f", &notas[i][j]);
            printf("Peso da %da nota: ", j + 1);
            scanf("%d", &pesos[i][j]);
        }
    }

    // Calculando as médias.
    for (i = 0; i < 3; i++) {
        float soma_notas = 0;
        int soma_pesos = 0;
        for (j = 0; j < 3; j++) {
            soma_notas += notas[i][j] * pesos[i][j];
            soma_pesos += pesos[i][j];
        }
        medias[i] = soma_notas / soma_pesos;
    }

    // Exibindo as médias.
    printf("\nMédias Ponderadas:\n");
    for (i = 0; i < 3; i++) {
        printf("%s: %.2f\n", disciplinas[i], medias[i]);
    }

    return 0;
}
