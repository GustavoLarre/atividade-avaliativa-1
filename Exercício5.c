#include<stdio.h>
#include<math.h>

main(){

/* 5-  Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:*/

//informação inicial
printf("\n calculadora eixos x e y");

//variáveis
float x1, x2, y1, y2, x, y, distancia;

//entrada dos dados
printf("\n\n Informe o valor de x1:");
scanf("%f", &x1);
printf("\n Informe o valor de x2:");
scanf("%f", &x2);
fflush(stdin);
printf("\n Informe o valor de y1:");
scanf("%f", &y1);
printf("\n Informe o valor de y2:");
scanf("%f", &y2);

//operações e saída

x = x2 - x1;
y = y2 - y1;
distancia = sqrt((pow(x,2) + pow(y,2)));
printf("\n A distancia e %.3f", distancia);

}