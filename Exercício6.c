#include<stdio.h>

main(){

/* 6- Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.*/

//informação inicial
printf("\n Coordenadas de um ponto no plano cartesiano");

//variáveis
double x, y;

//entrada dos dados
printf("\n\n Informe o valor de x:");
scanf("%lf", &x);
printf("\n Informe o valor de y:");
scanf("%lf", &y);

//operações e saída
if(x > 0){
    if(y > 0){
        printf("\n O ponto esta no primeiro quadrante.");
    }else if(y < 0){
         printf("\n O ponto esta no quarto quadrante.");
    }else if(y == 0){
         printf("\n O ponto esta no eixo x.");
    }
}else if(x < 0){
    if(y > 0){
         printf("\n O ponto esta no segundo quadrante.");
    }else if(y < 0){
         printf("\n O ponto esta no terceiro quadrante.");
    }else if(y == 0){
          printf("\n O ponto esta no eixo x.");
    }
}else if(x == 0 && y != 0){
      printf("\n O ponto esta no eixo y.");
}else if( x == 0 && y == 0){
      printf("\n O ponto esta na origem.");
}

}