// Pedir a quantidade de alunos na turma, usar FOR

// Para cada aluno solicitar 3 notas para calcular a média

//Controle de frenquencia, usar % (0-100) usar laço WHILE

// Exibir um menu com 4 opções (1) Ver resumo do aluno, (2) Ir para o próximo aluno,(3) Encerrar o programa antecipadamente (usando break)


#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalAlunos;
    int opcao;

    printf("--- Sistema de Gestao Academica - UniLasalle ---\n");
    printf("Quantos alunos deseja processar? ");
    scanf("%d", &totalAlunos);

    for (int i = 1; i <= totalAlunos; i++) {
        float n1, n2, n3, media;
        int frequencia;

        printf("\n--- Dados do Aluno%d ---\n", i);
        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

       
        media = (n1 + n2 + n3) / 3.0;
    
       
        do {
            printf("Digite a frequencia do aluno (0-100): ");
            scanf("%d", &frequencia);
            if (frequencia < 0 || frequencia > 100) {
            }
        } while (frequencia < 0 || frequencia > 100);

        printf("\nEscolha uma opcao: \n1- Ver status do aluno\n2- Proximo aluno\n3- Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                if (media >= 6.0) {
                    printf("Status: Aprovado. (Media: %.2f | Frequencia: %d%%)\n", media, frequencia);
                } else if (media >= 2.0) {
                    printf("Status: Recuperacao. (Media: %.2f | Frequencia: %d%%)\n", media, frequencia);
                } else {
                    printf("Status: Reprovado. (Media: %.2f | Frequencia: %d%%)\n", media, frequencia);
                }
                break;

            case 2:
                printf("Indo para o proximo aluno...\n");
                
                break; 
                
            case 3:
                printf("Encerrando programa antecipadamente...\n");
                return 0; 
                
            default:

                printf("Opcao invalida. Seguindo para o proximo aluno.\n");
                break;
        }
    }
    
    printf("\nProcessamento concluido.\n");
    return 0;
}






    
    

