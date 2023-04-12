/*Exercicio:
Criar um vetor denominado A com 10 posições do tipo int, preencher o vetor recebendo dados via teclado e multiplicar  conteudo de cada elemento
do vetor A por 10 armazenando o resultado desta multipicação em outro vetor denominado B
*/

#include<stdio.h>

int main()
{
    int A[10], B[10];
    int i;

    for(i=0; i<10;i++)
    {
        printf("%d - Digite os daodos do vetor A: \n",i);
            scanf("%d", &A[i]);
    }

    printf("Saida de dados do vetor A: \n");
    for(i=0; i<10;i++)
    {
        printf("A[%d] = %d",i,A[i]);
    }

    printf("\nSaida de dados do vetor B\n");
    for(i=0; i<10;i++)
    {
        B[i] = A[i] * 10;
        printf("B[%d] = %d: \n",i,B[i]);
    }

    return 0;
}