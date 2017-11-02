#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=0;

    printf("digite um numero: ");
    scanf("%*[^1234567890]");
    scanf("%d",&var);

    printf("\n\nNumero digitado foi %d \n\n",var);

   return 0;
}
