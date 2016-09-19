//
// Created by Thiago Cunha on 18/09/2016.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    int facaUmPedido = 1;
    int escolha;
    float total;
    float desconto;
    int quantidade;
    float pedido;

    //Preco dos cachorros quentes
    float cachorroQuente = 1.2;
    float bauruSimples = 1.3;
    float bauruComOvo = 1.5;
    float hamburguer = 1.2;
    float chessburguer = 1.7;
    float suco = 2.2;
    float refrigerante = 1.0;

    while(facaUmPedido == 1) {

        printf("-------------Menu-----------------\n");
        printf("[100] - Cachorro Quente\n");
        printf("[101] - Bauru Simples\n");
        printf("[102] - Bauru com ovo\n");
        printf("[103] - Hamburger\n");
        printf("[104] - Cheeseburguer\n");
        printf("[105] - Suco\n");
        printf("[106] - Refrigerante\n");
        printf("----------------------------------\n");

        printf("Digite o codigo do seu pedido: ");
        scanf("%d", &escolha);

        printf("\nQual a quantidade? ");
        scanf("%d", &quantidade);

        switch(escolha) {
            case 0:
                printf("\nEntendi que voce nao deseja nada. Obrigado!\n\n");
                break;
            case 100:
                pedido = cachorroQuente * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu cachorro quente: \n");
                printf("Preco unitario: %f\n", cachorroQuente);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco: %f\n", pedido);
                total += pedido;
                break;
            case 101:
                pedido = bauruSimples * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu Bauru Simples: \n");
                printf("Preco unitario: %f\n", bauruSimples);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco: %f\n", pedido);
                total += pedido;
                break;
            case 102:
                pedido = bauruComOvo * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu Bauru com ovo: \n");
                printf("Preco unitario: %f\n", bauruComOvo);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco: %f\n", pedido);
                total += pedido;
                break;
            case 103:
                pedido = hamburguer * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu Hamburguer: \n");
                printf("Preco unitario: %f\n", hamburguer);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco: %f\n", pedido);
                total += pedido;
                break;
            case 104:
                pedido = chessburguer * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu Chessburguer: \n");
                printf("Preco unitario: %f\n", chessburguer);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco total: %f\n", pedido);
                total += pedido;
                break;
            case 105:
                pedido = suco * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu Suco: \n");
                printf("Preco unitario: %f\n", suco);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco total: %f\n", pedido);
                total += pedido;
                break;
            case 106:
                pedido = refrigerante * quantidade;

                printf("\n\n---\n");
                printf("Voce escolheu refrigerante: \n");
                printf("Preco unitario: %f\n", refrigerante);
                printf("Quantidade: %d\n", quantidade);
                printf("Preco total: %f\n", pedido);
                total += pedido;
                break;
            default:
                printf("Ops, opcao invalida! Tente novamente...\n\n\n");
        }

        if (total > 10.0 & total <= 20.0) {
            printf("\n\n---\n");
            printf("Voce possui um vale de 10 porcento.\n");
        } else if (total > 20.0 && total <= 30.0) {
            printf("\n\n---\n");
            printf("Voce possui um vale de 20 porcento.\n");
        } else if (total > 30) {
            printf("\n\n---\n");
            printf("Voce possui um vale de 30 porcento.\n");
        } else {
            printf("Voce nao ganhou nenhum vale desconto!\n\n");
        }

        printf("Total sem desconto: %f\n\n", total);

        printf("Desenha fazer mais algum pedido? [1]SIM | [QUALQUER TECLA] ... NAO: ");
        scanf("%d", &facaUmPedido);

        if(facaUmPedido == 1) {
            printf("Ok! Vamos a mais uma escolha do seu lanche!\n\n\n");
        } else {
            printf("Obrigado e volte sempre!\n\n\n");
            facaUmPedido = 0;
        }
    }

    if (total > 10.0 && total <= 20.0) {
        desconto = (total / 100) * 20;
        printf("\n\n---\n");
        printf("Voce ganhou 10 porcento.\n");
    } else if (total > 20.0 && total <= 30.0) {
        desconto = (total / 100) * 20;
        printf("\n\n---\n");
        printf("Voce ganhou 20 porcento.\n");
    } else if (total > 30) {
        desconto = (total / 100) * 30;
        printf("\n\n---\n");
        printf("Voce ganhou 30 porcento.\n");
    } else {
        printf("Voce nao ganhou nenhum vale desconto!\n\n");
    }

    total = total - desconto;

    printf("Valor do desconto: %f\n", desconto);
    printf("VALOR TOTAL: %f\n\n\n", total);


    return 0;
}
