#include <stdio.h>

int main() {
    int codigos[200];
    char estados[200][3];
    int veiculos[200];
    int acidentes[200];

    int i = 0;
    int maxAcidentes = 0, minAcidentes = 0;
    int indiceMaxacidentes = 0, indiceMinacidentes = 0;
    double mediaVeiculos = 0.0, mediaAcidentesrs = 0.0;
    int totalVeiculos = 0, totalAcidentesrs = 0;
    int numCidadesrs = 0;
    char continuar;

    do {
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigos[i]);

        printf("Digite o estado da cidade: ");
        scanf("%s", estados[i]);

        printf("Digite o numero de veiculos de passeio em 1992: ");
        scanf("%d", &veiculos[i]);

        printf("Digite o numero de acidentes com vitimas em 1992: ");
        scanf("%d", &acidentes[i]);

       
        if (acidentes[i] > maxAcidentes || i == 0) {
            maxAcidentes = acidentes[i];
            indiceMaxacidentes = i;
        }
        if (acidentes[i] < minAcidentes || i == 0) {
            minAcidentes = acidentes[i];
            indiceMinacidentes = i;
        }

        
        if (estados[i][0] == 'R' && estados[i][1] == 'S') {
            totalVeiculos += veiculos[i];
            totalAcidentesrs += acidentes[i];
            numCidadesrs++;
        }

        i++;

       
        printf("Deseja continuar (S/N)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    
    if (i > 0) {
        mediaVeiculos = (double)totalVeiculos / i;
    }

  
    if (numCidadesrs > 0) {
        mediaAcidentesrs = (double)totalAcidentesrs / numCidadesrs;
    }

    // Imprimir resultados
    printf("a) Maior indice de acidentes de transito: Cidade %d no estado %s com %d acidentes\n", codigos[indiceMaxacidentes], estados[indiceMaxacidentes], maxAcidentes);
    printf("   Menor indice de acidentes de transito: Cidade %d no estado %s com %d acidentes\n", codigos[indiceMinacidentes], estados[indiceMinacidentes], minAcidentes);
    printf("b) Media de veículos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
    printf("c) Media de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2lf\n", mediaAcidentesrs);

  
}