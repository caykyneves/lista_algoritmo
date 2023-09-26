#include <stdio.h>

int main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votosNulos = 0, votosEmBranco = 0;

    printf("Digite o codigo do candidato (0 para encerrar): ");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                printf("Codigo de voto invalido: %d\n", voto);
        }

        printf("Digite o codigo do candidato (0 para encerrar): ");
    }

    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    
}