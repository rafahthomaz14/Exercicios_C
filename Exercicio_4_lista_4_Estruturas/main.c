#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 struct Calculadora{
    float a,b;
    char operacoes;
};

struct Calculadora calcular;
float resultado;

void main()
{
    setlocale(LC_ALL,"Portuguese");
    do{
        printf("Digite dois numero: ");
    scanf("%f %f",&calcular.a,&calcular.b);

    printf("Digite a opera��o desejada: (+,-,/,*) ");
    scanf("%s",&calcular.operacoes);

    switch(calcular.operacoes){
        case '+':
        resultado=calcular.a+calcular.b;
        printf("Resultado �: %2.f\n",resultado);
        break;

        case '-':
        resultado=calcular.a-calcular.b;
        printf("Resultado �: %2.f\n",resultado);
        break;

        case '/':
        if(calcular.a&&calcular.b == 0)
            printf("Nao � possivel fazer essa divis�o! ");
        else{
        resultado=calcular.a/calcular.b;
        printf("Resultado �: %2.f\n",resultado);
        }
        break;

        case '*':
        resultado=calcular.a*calcular.b;
        printf("Resultado �: %2.f \n",resultado);
        break;

        default:
        printf("op��o invalida, tente novamente! ");

    }
        system("pause");//mensagem para sair
        system("cls");//volta menu

    }while(calcular.operacoes!='s');
}
