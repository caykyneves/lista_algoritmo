#include<stdio.h>
int main(){
     int A, B, C;
     printf("Digite o valor de A:");
     scanf("%d", &A);
     printf("Digite o valor de B:");
     scanf("%d", &B);
     printf("Digite o valor de C:");
     scanf("%d", &C);

     if (A + B > C && A + C > B && B + C > A){
      if (A == B && B == C){
     printf("O triangulo e equilatero\n");
     }else if (A == B || A == C || B == C){
        printf("O triangulo e isosceles\n");
     }else{
      printf("É um triângulo escaleno.\n");
      }
     }else {
        printf("Nao e possivel formar um triangulo com esses valores.\n");
   
     


    
     

     

    
    
}
}
