#include <stdio.h>

// Função para mover a Torre, Bispo e Rainha usando recursão

void moverTorre(int casasTorre) {
    if (casasTorre > 0)
    {
        printf("Direita\n");
        moverTorre(casasTorre - 1);
    }
}
    
void moverBispo(int casasBispo) {
    if (casasBispo > 0)
    {
        printf("Cima direita\n");
        moverBispo(casasBispo - 1);
    }
    
}

void moverRainha(int casasRainha) {
    if (casasRainha > 0)
    {
        printf("Esquerda\n");
        moverRainha(casasRainha - 1);
    }
    
}

int main() {
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1; // Váriaveis das peças

    // Movimentos da Torre:
    
    printf("Movimentos da Torre: \n\n");

    moverTorre(5);

    // Movimentos do Bispo:

    printf("\nMovimentos do Bispo: \n\n");

    moverBispo(5);
    
    // Movimentos da Rainha:
    
    printf("\nMovimentos da Rainha: \n\n");

    moverRainha(8);
    
   // Movimento do Cavalo:

   printf("\nMovimento do Cavalo: \n\n");

   while (cavalo--)
   {
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
   }
   

    return 0;
}
