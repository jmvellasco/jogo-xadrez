# ♟️ Movimentação de Peças de Xadrez em C

Programa em linguagem C que simula a movimentação de peças do xadrez via terminal, utilizando **funções recursivas**, **estruturas de repetição** e **controle de fluxo**.

O foco do projeto é demonstrar lógica de programação e domínio de estruturas fundamentais da linguagem C.

---

## Visão Geral

O programa exibe no terminal os movimentos de quatro peças do xadrez:

- Torre
- Bispo
- Rainha
- Cavalo

Cada peça possui uma lógica de movimentação específica, implementada de forma simples e clara, sem entrada de dados do usuário.

---

## Funcionamento do Programa

### Torre
- Move **5 casas para a direita**
- Implementada com **função recursiva**
- A cada chamada recursiva, imprime:

### Bispo
- Move **5 casas na diagonal superior direita**
- Implementado com **função recursiva**
- Cada movimento imprime:

### Rainha
- Move **8 casas para a esquerda**
- Implementada com **função recursiva**
- Cada movimento imprime:

### Cavalo
- Movimento em formato de **L**
- Implementado com **loops aninhados (`while` + `for`)**
- Executa:
- 2 movimentos para cima
- 1 movimento para a direita

---

## Estrutura do Código

- Funções recursivas para movimentação da Torre, Bispo e Rainha
- Uso de `while` e `for` para movimentação do Cavalo
- Saída de dados via `printf`
- Execução sequencial no `main`

---

## Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Terminal (CLI)
- Git e GitHub

---

## Conceitos Demonstrados

- Funções recursivas
- Estruturas de repetição (`for`, `while`)
- Loops aninhados
- Controle de fluxo
- Organização e legibilidade de código

---

## Como Executar

```bash
gcc xadrez.c -o xadrez
./xadrez

