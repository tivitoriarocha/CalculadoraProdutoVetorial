#include <stdio.h>

int main() {
    float x1, y1, z1; // Vetor u = (x1, y1, z1)
    float x2, y2, z2; // Vetor v = (x2, y2, z2)
    float res_x, res_y, res_z; // Resultado do produto vetorial
    int opcao;

    printf("Calculadora de Produto Vetorial\n");
    printf("-------------------------------\n");

    // Solicita as componentes do vetor u
    printf("Digite as componentes do vetor u (x y z): ");
    scanf("%f %f %f", &x1, &y1, &z1);

    // Solicita as componentes do vetor v
    printf("Digite as componentes do vetor v (x y z): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Opção de cálculo
    printf("\nEscolha a operacao:\n");
    printf("1 - u x v (vetor u primeiro)\n");
    printf("2 - v x u (vetor v primeiro)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Cálculo baseado na opção escolhida
    if(opcao == 1) {
        // u x v
        res_x = y1 * z2 - z1 * y2;
        res_y = z1 * x2 - x1 * z2;
        res_z = x1 * y2 - y1 * x2;
        
        printf("\nMatriz para u x v:\n");
        printf("|  x      y      z  |  x      y  |\n");
        printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x1, y1, z1, x1, y1);
        printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x2, y2, z2, x2, y2);
    }
    else if(opcao == 2) {
        // v x u (ordem inversa)
        res_x = y2 * z1 - z2 * y1;
        res_y = z2 * x1 - x2 * z1;
        res_z = x2 * y1 - y2 * x1;
        
        printf("\nMatriz para v x u:\n");
        printf("|  x      y      z  |  x      y  |\n");
        printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x2, y2, z2, x2, y2);
        printf("| %.2f  %.2f  %.2f | %.2f  %.2f |\n", x1, y1, z1, x1, y1);
    }
    else {
        printf("\nOpcao invalida!\n");
        return 1;
    }

    // Exibe o cálculo
    printf("\nCalculo do produto vetorial:\n");
    if(opcao == 1) {
        printf("u x v = (x*%.2f*%.2f + y*%.2f*%.2f + z*%.2f*%.2f) - (y*%.2f*%.2f + x*%.2f*%.2f + z*%.2f*%.2f)\n",
               y1, z2, z1, x2, x1, y2, x1, z2, z1, y2, y1, x2);
    }
    else {
        printf("v x u = (x*%.2f*%.2f + y*%.2f*%.2f + z*%.2f*%.2f) - (y*%.2f*%.2f + x*%.2f*%.2f + z*%.2f*%.2f)\n",
               y2, z1, z2, x1, x2, y1, x2, z1, z2, y1, y2, x1);
    }

    // Resultado final
    printf("\nResultado: (%.2f, %.2f, %.2f)\n", res_x, res_y, res_z);

    return 0;
}