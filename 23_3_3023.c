typedef struct
{
    float p1;
    float p2;
    float trab;
    int faltas;
} Aluno;

int main()
{

    Aluno a1, a2;
    a1.p1 = 5.7;
    a1.p2 = 9.5;
    print(a1);

    a2.p2 = 7.5;
    a2.faltas = 0;
    print(a2);

    a2 = a1;
    print(a2);

    a1.p1 - 10;
}

void print(Aluno a)
{
    printf("Informações sobre o aluno");
    printf(" p1: %f\n", a.p1);
    printf(" p2: %f\n", a.p2);
    printf(" trab: %f\n", a.trab);
    printf(" faltas: %d\n", a.faltas);
}