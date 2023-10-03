#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int dia,mes,ano;
}Data;

typedef Data TipoData;

typedef struct {
    char nome[50];
    TipoData dataNascimento;
}Pessoa;

typedef Pessoa TipoPessoa;

void main()
{
    setlocale(LC_ALL,"Portuguese");
    TipoPessoa Pessoa;

    printf("Digite seu Nome: ");
    scanf("%s",&Pessoa.nome);

    printf("\nDigite sua data de nascimento XX XX XXXX: ");
    scanf("%d %d %d",&Pessoa.dataNascimento.dia,&Pessoa.dataNascimento.mes,&Pessoa.dataNascimento.ano);

    printf("Voce se chama %s e sua data de nascimento é %d/%d/%d :",Pessoa.nome,Pessoa.dataNascimento.dia,Pessoa.dataNascimento.mes,Pessoa.dataNascimento.ano);
}
