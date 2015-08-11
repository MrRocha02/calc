#include<stdio.h>

//A única biblioteca necessária para esse programa é essa acima...


int main ()
{
    float notas,media;
    int i;
    
    for (i = 0; i < 4; i++)
    {
        printf("Digite a nota do teste %d: ",i+1);
        scanf("%f", &notas);
        media = notas + media;
    }
    
    media = media/i;
    
    if ((media <6) && (media>=0))printf("\n Media: %.2f \n Reprovado! \n", media);
    else if ((media >= 6) && (media <=10)) printf("\n Media: %.2f \n Aprovado! \n", media);
    else printf("Nota inválida. \n");
    
    
    return 0;
}
