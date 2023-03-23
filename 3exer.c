#include <stdio.h>

int acha()
{
    int vet[] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8};

    int i, j, quant;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {

            if (vet[j] == vet[i])
            {
                printf("%d\n", quant++);
                // printf("%d\n", vet[i]);
            }
        }
    }
    // printf("%d", quant);
}
int main()
{
    acha();
}