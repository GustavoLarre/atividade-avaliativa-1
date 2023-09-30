#include<stdio.h>

main(){

/* 7-  Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10*/

//informação inicial
printf("\n Software do boletim escolar");

//variáveis
double n1, n2, n3, mp, mediaGeral, mg = 0, totalE = 0;
int opcao;

//entrada dos dados
do{
    //cadastrar n1
    do{
        fflush(stdin);
        printf("\n\n Informe a nota do aluno(a) no 1 Bimestre:");
        scanf("%lf", &n1);
        if(n1 < 0){
            printf("\n Opcao invalida.");
        }
    }while(n1 < 0);

    //cadastrar n2
    do{
        fflush(stdin);
        printf("\n Informe a nota do aluno(a) no 2 Bimestre:");
        scanf("%lf", &n2);
        if(n2 < 0){
            printf("\n Opcao invalida.");
        }
    }while(n2 < 0);

    //cadastrar n3
    do{
        fflush(stdin);
        printf("\n Informe a nota do aluno(a) no 3 Bimestre:");
        scanf("%lf", &n3);
        if(n3 < 0){
            printf("\n Opcao invalida.");
        }
    }while(n3 < 0);

    //Cálculo mp
    mp = ((n1 * 2) + (n2 * 4) + (n3 * 4)) / 10;
    mg += mp;
    
    if(mp > 7){
        printf("\n Parabens voce tirou %.2lf pontos e foi aprovado.", mp);
    }else{
        printf("\n Infelizmente voce tirou %.2lf pontos e esta reprovado.", mp);
    }
    totalE++;

    printf("\n Deseja cadastrar e obter a media ponderada de um novo aluno? (1 Sim e - 1 Nao)");
    scanf("%d", &opcao);
}while(opcao != -1);

mediaGeral = mg / totalE;
printf("\n Media geral da nota dos alunos: %.2lf", mediaGeral);

}