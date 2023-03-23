#include <stdio.h>
#include <string.h>

void print(char *msg);

int main()
{
    char greeting[6] = {"H"
                        "e"
                        "l"
                        "l"
                        "o",
                        0};
    printf("MAIN -> Greeting message: %s (%d)\n", greeting, strlen(greeting));
    for (int i = 0; i < 6; i++)
    {
    }
}

void charByChar(char *msg)
{
    printf("Mensagem a ser impressa: \n");
    // ALTERNATIVA 1
    /*
    for (int i =0; msg[i]!='\0'; i++)
        printf("%c", msg[i]);
    */
}
int nChar(char *msg)
{
    char *ptr = msg;
    while (*ptr++ != '\0')
}