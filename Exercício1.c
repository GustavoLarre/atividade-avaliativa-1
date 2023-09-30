#include<stdio.h>
#include<math.h>

main(){

/* 1- Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).*/

//informação inicial
printf("\n Calculadora");

//variáveis
double x, fx;

//entrada dos dados
printf("\n\n Digete o valor de x:");
scanf("%lf", &x);

//operações e saída
fx = ((5 * x) + 3) / (sqrt (pow(x,2) - 16));
printf("\n F(x) = %.3lf", fx);

}