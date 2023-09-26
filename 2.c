#include<stdio.h>
int main(){
    double chico = 1.50;
    double ze = 1.10;
    int anos = 0;

    while (ze <= chico){
        chico += 0.02;
        ze += 0.03;
        anos++;
       
    }
    printf("Ze sera maior que Chico daqui a %d anos \n", anos );
    





}
