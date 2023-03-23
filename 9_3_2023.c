#include <stdio.h>
int main()
{
    int b = 200;
    int *a = &b; // a armazenará o endereço de b

    printf("Valor de b: %d\n", b);
    printf("endereco de b: %p\n", &b);
    printf("Valor de a: %p\n", a);
    printf("endereco de a: %p\n", &a);
    printf("Conteudo apontado por a: %d\n", *a);
    printf("---------------------------------------------------------------------------------------\n");
    b = 100;
    printf("Valor de b: %d\n", b);
    printf("Valor de a: %p\n", a);
    printf("Conteudo apontado por a: %d", *a);

    *a = 300;
    printf("Valor de b: %d\n", b);
    printf("Valor de a: %p\n", a);
    printf("Conteudo apontado por a: %d", *a);
}