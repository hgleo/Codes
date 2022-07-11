/*

Faça um programa para gerenciar as notas de uma turma de alunos. Esta turma tem as seguintes características: 
- Cada aluno é uma struct com os seguintes campos: nome, P1, P2, média e VS 
- A turma é um vetor de structs. Considere que a turma não terá mais que 50 alunos. 
O programa deverá cumprir as seguintes tarefas:  
1) Perguntar ao usuário o número de alunos da turma. 
2) Para cada aluno, ler o nome as notas da P1 e P2 e calcular a média. Caso o aluno tenha direito a fazer a VS, o programa deve perguntar ao usuário qual a nota da VS deste aluno. 
3) Calcular e imprimir a média e a mediana da turma com respeito a média final de cada aluno.  
4) Imprimir o número de aprovados e reprovados. 
5) Imprimir o nome e a média de todos os alunos da turma ordenando de forma decrescente pela média. 
6) Imprimir o nome e a média de todos os alunos da turma em ordem alfabética 

*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<conio.h>


int qtde;
//#define TAM 1
typedef struct 
{
    char nome[50];
    float p1;
    float p2;
    float media;

   // media = (p1 + p2)/2;

}Tcad;


int main()
{
    system("cls");
    Tcad cad_aluno[qtde];
    int opcao,i;
    setlocale(LC_ALL,"");
    printf("Insira a quantidade de alunos: ");
    scanf("%d",&qtde);
    do 
    {
        printf("\nCadastro dos Alunos: \n");
        printf("Digite o numero de uma das opções: \n");
        printf("1- Cadastrar aluno \n");
        printf("2- Listar alunos \n");
        printf("3- Listar media de alunos \n");
        printf("0- Sair \n");
        scanf("%d", &opcao);
        

        if (opcao == 1)
        {

            for (i = 0; i <qtde; i++){
			fflush(stdin);
			printf ("\n Nome do aluno:");
			//scanf ("%s", cad_aluno[i].nome);
            gets(cad_aluno[i].nome);
			//fflush(stdin);
			printf ("\n P1 do aluno: ");
			scanf ("%f", &cad_aluno[i].p1);
			fflush(stdin);
			printf ("\n p2 do aluno: ");
			scanf ("%f", &cad_aluno[i].p2);
			//fflush(stdin);
			cad_aluno[i].media = cad_aluno[i].p1/2 + cad_aluno[i].p2/2;
			//fflush(stdin);

            system("cls");
			} 
        }
        else if (opcao==2)
        {
            for (i = 0; i <qtde; i++) 
            {
				printf ("\n%s", cad_aluno[i].nome);

                /*printf ("%f", cad_aluno[i].p1);
                printf ("%f", cad_aluno[i].p2);
                printf ("%f", cad_aluno[i].media);*/
            }
        }

        else if (opcao == 3)
        {
            for (i = 0; i <qtde; i++)
            {
                printf ("\n%.2f", cad_aluno[i].media);
            }
        }
        else if (opcao == 0)
        {
            return 0;
        }
    }while (opcao != 0);
}