#include <stdio.h>
 
int main() {
    int torre = 1, rainha = 1, bispo = 1, cavalo = 1;

        printf("Movimento da Torre:\n");
                printf("\n");


        for (int torre = 1; torre <= 5; torre++) {
            
             printf("Direita\n");
                printf("\n");
        }

        printf("Movimento da Rainha:\n");
                printf("\n");

        for (int rainha = 1; rainha <= 8; rainha++) {
            
             printf("Esquerda\n");
                printf("\n");
        }

        // Para a obrigatoriedade de um loop do while, usei o movimento em duas etapas do bispo para isso
        //  cada impressão de "cima" eu imprimo uma impressão "Direita" para representar no o movimento

        printf("Movimento da Bispo:\n");
                printf("\n");

            do
                {     int i = 1;

                    do
            {
                printf("Cima -->");
                i++;

                } while (i <= 1);
                bispo++;

                    printf(" Direita\n");
                        printf("\n");


            } while (bispo <=5);
            




        //for (int bispo = 1; bispo <= 5; bispo++) {
            // Apenas para simular um atraso
          //   printf("Cima --> Direita\n");
            //    printf("\n");
        //}

        printf("Movimento da Cavalo:\n");
                printf("\n");

        // para o loop for, usando o movimento do cavalo, para cada 2 "Baixo" eu faço um "Esquerda"
        // e limitei a quantidade da impressao de "Baixo" para uma, assim condizendo com o movimento

        for (int cavalo = 1; cavalo <= 1; cavalo++) {

            for (int cavalo = 1; cavalo <= 2; cavalo++) {
            // Apenas para simular um atraso
                printf("Baixo\n");
                    printf("\n");
            }
            // Apenas para simular um atraso
             printf("Esquerda\n");
                printf("\n");
        }




    return 0;
}
