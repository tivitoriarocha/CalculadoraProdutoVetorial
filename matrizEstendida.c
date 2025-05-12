#include <stdio.h>

int main() {
    float u_i, u_j, u_k; // Vetor u = (i1, j1, k1)
    float v_i, v_j, v_k; // Vetor v = (i2, j2, k2)
    float resultado_i, resultado_j, resultado_k; // Resultado do produto vetorial

    printf("Calculadora de Produto Vetorial (u x v)\n");
    printf("---------------------------------------\n");

    // Solicita as componentes do vetor u
    printf("Digite as componentes do vetor u (i j k): ");
    scanf("%f %f %f", &u_i, &u_j, &u_k);

    // Solicita as componentes do vetor v
    printf("Digite as componentes do vetor v (i j k): ");
    scanf("%f %f %f", &v_i, &v_j, &v_k);

    // Cálculo usando a regra de Sarrus (matriz estendida)
    resultado_i = (u_j * v_k) - (u_k * v_j);  // Termos positivos: (j1*k2) - (k1*j2)
    resultado_j = (u_k * v_i) - (u_i * v_k);  // Termos positivos: (k1*i2) - (i1*k2)
    resultado_k = (u_i * v_j) - (u_j * v_i);  // Termos positivos: (i1*j2) - (j1*i2)

    // Exibe a matriz estendida (para visualização)
    printf("\nMatriz estendida para cálculo (Regra de Sarrus):\n");
    printf("|  i      j      k  |  i      j  |\n");
    printf("| %.2f   %.2f   %.2f | %.2f   %.2f |\n", u_i, u_j, u_k, u_i, u_j);
    printf("| %.2f   %.2f   %.2f | %.2f   %.2f |\n", v_i, v_j, v_k, v_i, v_j);

    // Exibe o cálculo passo a passo
    printf("\nCálculo do produto vetorial:\n");
    printf("u x v = (i*%.2f*%.2f + j*%.2f*%.2f + k*%.2f*%.2f) - (j*%.2f*%.2f + i*%.2f*%.2f + k*%.2f*%.2f)\n",
           u_j, v_k, u_k, v_i, u_i, v_j, u_i, v_k, u_k, v_j, u_j, v_i);

    // Exibe o resultado final
    printf("\nO produto vetorial u x v é: (%.2f, %.2f, %.2f)\n",
           resultado_i, resultado_j, resultado_k);

    return 0;
}