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

typedef struct user
{
    char login[10];
    char senha[10];
}user;

//declaração de funções
void menu_principal();
user* entrar();

int main()
{
    user *u1;
    setlocale(LC_ALL, "portuguese");
    u1=entrar();
    menu_principal(u1);

    return 0;
}

user* entrar()
{
    user *temp;
    FILE *usuarios;
    fopen("users.txt", "r");
}

user* criar()
{

}

void menu_principal()
{
    int op;
    do
    {
        printf("\n1.Jogar  \t|[1]Fulando\n2.Scores\t|+10 vitórias\n3.Sair   \t|15-5 derrotas\n");
        op=e_inteiro();
        switch(op)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    while (op!=3);
}
