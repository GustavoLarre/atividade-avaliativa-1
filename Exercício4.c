#include<stdio.h>

main(){

/* 4- Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

//informação inicial
printf("\n Verifique o tipo desse triangulo");

//variáveis
float a, b , c, soma;

//entrada dos dados
printf("\n\n Informe o valor do lado A:");
scanf("%f", &a);
printf("\n Informe o valor do lado B:");
scanf("%f", &b);
printf("\n Informe o valor do lado C:");
scanf("%f", &c);

//operações e saída
soma = a + b + c;

if(soma != 180){
    printf("\n Esse objeto nao pode ser um triangulo pois a soma dos seus angulos internos foi diferente de 180 graus.");
}

if(soma == 180){
    if(a == 90 || b == 90 || c == 90){
        printf("\n Esse triangulo e retangulo.");
    }else if(a < 90 && b < 90 && c < 90){
        printf("\n Esse triangulo e acutangulo.");
    }else if(a > 90 || b > 90 || c > 90){
        printf("\n esse triangulo e obtusangulo.");
    }
}

}