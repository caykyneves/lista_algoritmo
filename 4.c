#include <stdio.h>

int main() {
    float A, B, C;

    
    printf("Digite o lado A: ");
    scanf("%f", &A);
    printf("Digite o  lado B: ");
    scanf("%f", &B);
    printf("Digite o  lado C: ");
    scanf("%f", &C);

    
    if (A + B > C && A + C > B && B + C > A) {
        
        if (A == B && B == C) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (A == B || A == C || B == C) {
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            printf("Os lados formam um triangulo escaleno.\n");
        }

       
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("e tambem um triangulo retangulo.\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("e tambem um triangulo obtusangulo.\n");
        } else {
            printf("e tambem um triangulo acutangulo.\n");
        }
    } else {
        printf("Os lados não formam um triangulo.\n");
    }

   
}