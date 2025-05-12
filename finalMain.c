//CAUCULADORA DE PRODUTO VETORIAL

//Alunos:
//Maria Vitória Fernandes Rocha
//Jorge Luiz Rego Alves


#include <stdio.h>

void calcularProdutoVetorial() {
    float x1, y1, z1; // Vetor u = (x1, y1, z1)
    float x2, y2, z2; // Vetor v = (x2, y2, z2)
    float res_x, res_y, res_z; // Vetor resultante
    int opcao; // Índice de escolha 

    printf("\nDigite as componentes do vetor u (x y z): ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Digite as componentes do vetor v (x y z): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    while(1) {
        printf("\nEscolha a operacao:\n");
        printf("1 - u x v (vetor u primeiro)\n");
        printf("2 - v x u (vetor v primeiro)\n");
        printf("3 - Finalizar operação.\n");
        printf("0 - Voltar para novos vetores\n");
        printf("Opcao: ");
        
        if(scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite um numero.\n");
            while(getchar() != '\n'); // Limpa buffer do teclado
            continue;
        }

        if(opcao == 0) {
            calcularProdutoVetorial(); // Recursão para novos vetores
            return;
        }
        else if(opcao == 1 || opcao == 2) {
            if(opcao == 1) {
                res_x = y1 * z2 - z1 * y2;
                res_y = z1 * x2 - x1 * z2;
                res_z = x1 * y2 - y1 * x2;
                
                printf("\nMatriz para u x v:\n");
                printf("|  x      y      z  |  x      y  |\n");
                printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x1, y1, z1, x1, y1);
                printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x2, y2, z2, x2, y2);
            }
            else if(opcao == 2){
                res_x = y2 * z1 - z2 * y1;
                res_y = z2 * x1 - x2 * z1;
                res_z = x2 * y1 - y2 * x1;
                
                printf("\nMatriz para v x u:\n");
                printf("|  x      y      z  |  x      y  |\n");
                printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x2, y2, z2, x2, y2);
                printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x1, y1, z1, x1, y1);
            }
            printf("\nResultado: (%.2f, %.2f, %.2f)\n", res_x, res_y, res_z);
        }
        else if(opcao == 3 ){
            break;   
        }
        else{
            printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

int main() {
    printf("Calculadora de Produto Vetorial\n");
    printf("-------------------------------\n");
    printf("Digite 0 a qualquer momento para voltar\n");

    calcularProdutoVetorial();
    
    return 0;
} 