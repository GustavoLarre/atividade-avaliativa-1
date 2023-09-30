#include<stdio.h>

main(){

/* 3- Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

//informação inicial
printf("\n Verifique o tipo desse triangulo");

//variáveis
float a, b , c;

//entrada dos dados
printf("\n\n Informe o valor do lado A:");
scanf("%f", &a);
printf("\n Informe o valor do lado B:");
scanf("%f", &b);
printf("\n Informe o valor do lado C:");
scanf("%f", &c);

//operações e saída
if(a == b || a == c || b == c){
    if(a == b && a == c && b == c ){
        printf("\n Esse triangulo e equilatero.");
    }else if(a != b || a != c){
        printf("\n Esse triangulo e isosceles.");
    }
}
if(a != b && a != c && b != c){
    printf("\n Esse triangulo e escaleno.");
}

}