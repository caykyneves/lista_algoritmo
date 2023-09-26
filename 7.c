#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas[numAlunos][3]; 
    double medias[numAlunos];   
    double mediaGeral = 0.0;

    
    for (int i = 0; i < numAlunos; i++) {
        printf("Informe as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);

        
        medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10.0;

        
        mediaGeral += medias[i];

        
        if (medias[i] >= 7.0) {
            printf("Aluno %d: media %.2lf - aprovado\n", i + 1, medias[i]);
        } else {
            printf("Aluno %d: media %.2lf - reprovado\n", i + 1, medias[i]);
        }
    }

    
    mediaGeral /= numAlunos;

    printf("media geral da turma: %.2lf\n", mediaGeral);

    
}