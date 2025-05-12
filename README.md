# 📐 Calculadora de Produto Vetorial

![C](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/status-%20finalizado-yellow)
![Contribuições](https://img.shields.io/badge/contribui%C3%A7%C3%B5es-bem%20vindas-green)

> 💡 Uma calculadora simples e interativa em C para realizar o produto vetorial entre dois vetores tridimensionais.

---

## 👩‍💻 Autores

- 👩 Maria Vitória Fernandes Rocha  
- 👨 Jorge Luiz Rego Alves

---

## ⚙️ Funcionalidades

✅ Inserção de dois vetores tridimensionais  
✅ Cálculo do produto vetorial nas ordens `u × v` e `v × u`  
✅ Exibição da matriz da operação  
✅ Interface amigável no terminal  
✅ Possibilidade de inserir novos vetores sem reiniciar

---

## 🧰 Como Compilar

>⚠️ O arquivo contendo todos as implementações finais a ser compilado é finalMain.c

```bash
gcc -g -o main finalMain.c

gdb main

run
```

---

## 📘 Conceitos aplicados

🔹 Produto vetorial  
🔹 Vetores tridimensionais  
🔹 Recursividade e loops em C  
🔹 Manipulação de entrada/saída via terminal

---

## 📎 Observações

⚠️ O produto vetorial é não comutativo: u × v ≠ v × u  
🔁 A estrutura recursiva permite reiniciar o processo com novos vetores sem reiniciar o programa

---

## 🧪 Exemplo de Uso

```bash
Calculadora de Produto Vetorial
-------------------------------
Digite 0 a qualquer momento para voltar

Digite as componentes do vetor u (x y z): 1 2 3
Digite as componentes do vetor v (x y z): 4 5 6

Escolha a operacao:
1 - u x v (vetor u primeiro)
2 - v x u (vetor v primeiro)
3 - Finalizar operação.
0 - Voltar para novos vetores
Opcao: 1

Matriz para u x v:
|  x      y      z  |  x      y  |
| 1.00  2.00  3.00 | 1.00  2.00 |
| 4.00  5.00  6.00 | 4.00  5.00 |

Resultado: (-3.00, 6.00, -3.00)
```
---

## 📄 Licença

🆓 Projeto livre para uso acadêmico e educacional.
Sinta-se à vontade para clonar, adaptar e compartilhar!
