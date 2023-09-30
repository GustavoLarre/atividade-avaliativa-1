#include<stdio.h>

main(){

/* 2- Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

//variáveis
float chico = 1.50, ze = 1.10, contador;

//operações e saida
for(float contador = 0; contador <= 40; contador++){
    chico += 0.02;
    ze += 0.03;

    if(ze > chico){
        printf("\n Em %.0f anos Ze (%.2f) sera maior que chico (%.2f).", contador, ze, chico);

    }

}

}