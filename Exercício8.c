#include<stdio.h>

main(){

/* 8-  A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.*/

//informação inicial
printf("\n Software da prefeitura");

//variáveis
float sal, sal1, filhos, filhos1 = 0, medSal, medFilhos, totalEspecifico = 0, porcentagem, maiorSal = 0;
int opcao, totalP = 0;

// entrada dos dados 
do{
    do{
        fflush(stdin);
        printf("\n\n Quantos filhos voce tem?");
        scanf("%f", &filhos);
        if(filhos < 0){
            printf("\n Opcao invalida.");
        }
    }while(filhos < 0);

    filhos1 += filhos;

    do{
        fflush(stdin);
        printf("\n Informe o seu salario:");
        scanf("%f", &sal);
        if(sal <= 100){
            totalEspecifico++;
        }
        if(maiorSal < sal){
            maiorSal = sal;
        }

    }while(sal < 0);

    sal1 += sal;
    totalP ++;

    printf("\n Deseja cadastrar um novo habitante? (1 Sim e - 1 Nao)");
    scanf("%d", &opcao);

}while(opcao != -1);

medSal = sal1 / totalP;
medFilhos = filhos1 / totalP;
porcentagem = (float) totalEspecifico / totalP * 100;

printf("\n A media de salario da populacao e: R$ %.2f", medSal);
printf("\n A media de filhos da populacao e: %.2f", medFilhos);
printf("\n Porcentagem de pessoas com salario ate 100: %.2f", porcentagem);
printf("\n O maior salario e: R$ %.2f", maiorSal);

}