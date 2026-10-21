#include <stdio.h>
#include <stdlib.h>

// 1. Definir estrutura
typedef struct {
    char nome[50];
    int codigo;
    float preco;
} Produto;

void aplicarDesconto(Produto *p, float percentual) {
    // Calculo: novo preço = preço atual - (preço atual * (percentual / 100))
    p->preco = p->preco - (p->preco * (percentual / 100));
    
    printf("\nDesconto de %.2f%% aplicado com sucesso!", percentual);
}

int main() {
    Produto prod; 
    float desc;

    printf("--- Cadastro de Produto ---\n");
    
    printf("Nome do produto: ");
    
    scanf(" %49[^\n]", prod.nome); 

    printf("Codigo: ");
    scanf("%d", &prod.codigo);

    printf("Preco original: R$ ");
    scanf("%f", &prod.preco);

  
    printf("\nDigite o percentual de desconto: ");
    scanf("%f", &desc);


    aplicarDesconto(&prod, desc);

    
    printf("\n\n--- Dados Atualizados ---");
    printf("\nNome: %s", prod.nome);
    printf("\nCodigo: %d", prod.codigo);
    printf("\nNovo Preco: R$ %.2f\n", prod.preco);

    return 0;
}