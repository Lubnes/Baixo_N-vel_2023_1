#include <stdio.h>

void quadrado(); // prototipo quando quero colocar a main em primeiro

void quadrado()
{
    int k;
    for (k = 1; k <= 10; k++)
        printf("%d\n", k * k);
}

int main()
{
    quadrado();
}