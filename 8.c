#include <stdio.h>

int main() {
    double salario, somaSalarios = 0.0;
    int numFilhos, somaFilhos = 0;
    double maiorSalario = 0.0;
    int numPessoasAte100 = 0;
    int numPessoas = 0;

    do {
        
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        
        if (salario < 0) {
            break;
        }

        
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        somaSalarios += salario;

        somaFilhos += numFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            numPessoasAte100++;
        }

        numPessoas++;

    } while (1);

   
    double mediaSalario = somaSalarios / numPessoas;
    double mediaFilhos = (double)somaFilhos / numPessoas;

  
    double percentualAte100 = (double)numPessoasAte100 / numPessoas * 100.0;

    
    printf("a) Media do salario da populacao: %.2lf\n", mediaSalario);
    printf("b) Media do numero de filhos: %.2lf\n", mediaFilhos);
    printf("c) Maior salario: %.2lf\n", maiorSalario);
    printf("d) Percentual de pessoas com salario ate R$100,00: %.2lf%%\n", percentualAte100);

    
}





