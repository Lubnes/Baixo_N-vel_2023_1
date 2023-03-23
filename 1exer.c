#include <stdio.h>

void notas()
{
    int n100, n50, n10, n5, n1, R;
    printf("Qual o valor de R?");
    scanf("%d", &R);

    n100 = R / 100;
    n50 = (R % 100) / 50;
    n10 = (R % 50) / 10;
    n5 = (R % 10) / 5;
    n1 = (R % 5);

    printf("100 - %d\n 50 - %d\n 10 - %d\n 5 - %d\n 1 - %d\n ", n100, n50, n10, n5, n1);
}
int main()
{
    notas();
}