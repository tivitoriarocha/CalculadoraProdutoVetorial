#include <stdio.h>

int main() {
    float u_i, u_j, u_k; // Componentes do vetor u
    float v_i, v_j, v_k; // Componentes do vetor v
    float resultado_i, resultado_j, resultado_k; // Componentes do resultado

    printf("Calculadora de Produto Vetorial (u x v)\n");
    printf("---------------------------------------\n");

    // Solicita as componentes do vetor u
    printf("Digite as componentes do vetor u (i j k): ");
    scanf("%f %f %f", &u_i, &u_j, &u_k);

    // Solicita as componentes do vetor v
    printf("Digite as componentes do vetor v (i j k): ");
    scanf("%f %f %f", &v_i, &v_j, &v_k);

    // Calcula o produto vetorial (u x v)
    resultado_i = u_j * v_k - u_k * v_j;
    resultado_j = u_k * v_i - u_i * v_k;
    resultado_k = u_i * v_j - u_j * v_i;

    // Exibe o resultado
    printf("\nO produto vetorial u x v é: (%.2f, %.2f, %.2f)\n", 
           resultado_i, resultado_j, resultado_k);

    return 0;
}