#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char* e_texto(int tam)
{
    //github.com/Irineu333/Funcoes-de-Entrada-Perfeitas
    char *temp=NULL;
    temp=(char*)malloc(sizeof(char)*tam);
    fgets(temp, tam, stdin);
    temp[strlen(temp)-1] = '\0';
    fflush(stdin);

    return temp;
}

int e_inteiro()
{
    int temp=0;
    temp = atoi(e_texto(11));

    return temp;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("\n1.Jogar  \t|[1]Fulando\n2.Scores\t|+10 vitórias\n");
    // printf("\nModo: (1) Computador\n      (2) Dois jogadores\n");

    //printf("\nScore:\n[1]Fulano +10 vitórias\n[2]Sicrano -5 vitórias\n");

    return 0;
}
