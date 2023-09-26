#include<stdio.h>
int main(){
    double x, fx;
    printf("Digite o valor de X:");
    scanf("%lf", &x);

    if (x*x - 16 != 0){
        fx = (5 * x + 3) / (x * x - 16);
        printf("fx = %lf \n", fx);


    }else{
        printf("Divisão por zero!\n");
    }

    
    

    
}
