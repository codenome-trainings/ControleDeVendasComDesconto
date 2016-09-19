//
// Created by Thiago Cunha on 18/09/2016.
//
#include <stdio.h>
#include <stdlib.h>

double CACHORRO_QUENTE = 1.2;
double BAURU_SIMPLES = 1.3;
double BAURU_COM_OVO = 1.5;
double HAMBURGUER = 1.2;
double CHEESEBURGUER = 1.7;
double SUCO = 2.2;
double REFRIGERANTE = 1.0;
double total = 0;

double facaPedido(char lanche[30], int quantidade, const int valorDoLanche) {
    printf("\n\n---\n");
    printf("Voce escolheu %s: \n", lanche);
    printf("Preco unitario: %f\n", valorDoLanche);
    printf("Quantidade: %d\n", quantidade);
    printf("Preco deste pedido: %f\n", quantidade * valorDoLanche);
    printf("Preco sem desconto: %f\n", total);
    verificaDesconto();
    return valorDoLanche * quantidade;
}

void menu() {
    int escolha;
    int quantidade;
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
            return;
        case 100:
            total += facaPedido("Cachorro Quente", quantidade, CACHORRO_QUENTE);
            break;
        case 101:
            total += facaPedido("Bauru Simples", quantidade, BAURU_SIMPLES);
            break;
        case 102:
            total += facaPedido("Bauru com ovo", quantidade, BAURU_COM_OVO);
            break;
        case 103:
            total += facaPedido("Hamburguer", quantidade, HAMBURGUER);
            break;
        case 104:
            total += facaPedido("Chessburguer", quantidade, CHEESEBURGUER);
            break;
        case 105:
            total += facaPedido("Suco", quantidade, SUCO);
            break;
        case 106:
            total += facaPedido("Bauru com ovo", quantidade, REFRIGERANTE);
            break;
        default:
            printf("Ops, opcao invalida! Tente novamente...\n\n\n");
    }

    printf("Desenha fazer mais algum pedido? [1]SIM | [QUALQUER TECLA] ... NAO: ");
    scanf("%d", &escolha);
    if(escolha == 1) {
        printf("Ok! Vamos a mais uma escolha do seu lanche!\n\n\n");
        menu();
    }
    printf("Obrigado e volte sempre!\n\n\n");
    analiseFinal();
    return;

}

void verificaDesconto () {
    printf("Total sem desconto: %f\n\n", total);
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
}

double aplicaDesconto() {
    double desconto;
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
    return desconto;
}

void analiseFinal() {
    total = total - aplicaDesconto();
    printf("Valor do desconto: %f\n", aplicaDesconto());
    printf("VALOR TOTAL: %f\n\n\n", total);
}

int main() {
    menu();
    return 0;
}
