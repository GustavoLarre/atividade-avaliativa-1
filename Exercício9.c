#include<stdio.h>

main(){

/* 9- Eleição presidencial*/

//informação inicial
printf("\n Urna eletronica");

//variáveis
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, opcao, candidato;

//entrada dos dados
do{
    do{
        printf("\n\n Digite o numero do seu candidato:");
        scanf("%d", &candidato);
        if(candidato <= 0 || candidato >= 7){
            printf("\n Esse numero nao e valido");
        }

        if(candidato > 0 && candidato < 7){
            switch (candidato){

            case 1:
            a += 1;
            break;

            case 2:
            b += 1;
            break;

            case 3:
            c += 1;
            break;

            case 4:
            d += 1;
            break;

            case 5:
            e += 1;
            break;

            case 6:
            f += 1;
            break;

            }
        
        }

    }while(candidato <= 0);

    printf("\n Deseja terminar a votacao (0 Sim e 1 Nao)");
    scanf("%d", &opcao);
}while(opcao != 0);

printf("\n Total de votos do candidato A: %d", a);
printf("\n Total de votos do candidato B: %d", b);
printf("\n Total de votos do candidato C: %d", c);
printf("\n Total de votos do candidato D: %d", d);
printf("\n Total de votos nulos: %d", e);
printf("\n Total de votos brancos: %d", f);

}