#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2, resultado;
    printf("Digite o valor 1: \ne v2:\n");
    scanf("%i%i", &v1, &v2);

    resultado = multiplicacao(v1, v2);
    printf("O resultado e: %i \n", resultado);

return 0;
}

int multiplicacao( int n1, int n2)
{
    int resultado;
    resultado = n1 * n2;
    return(resultado);
}
