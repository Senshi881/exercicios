#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    /*Nome 
    Idade
    Matricula
    Endereçoo
    Curso
    Período
    Disciplinas*/

    int idade, matricula;
    char nome[50];
    char endereco[30];
    char curso[25];
    char periodo[10];
    char disciplinas[100];

    
    printf("Bem vindo! Para se cadastrar e preciso que me informe seus dados; \nSeu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    fflush(stdin);

    printf("Sua idade: ");
    scanf("%2d", &idade);
    while (getchar() != '\n');

    printf("Sua matricula: ");
    scanf("%7d", &matricula);
    while (getchar() != '\n');

    printf("Seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';
    fflush(stdin);

    printf("Seu curso: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0';
    fflush(stdin);

    printf("Seu periodo: ");
    fgets(periodo, sizeof(periodo), stdin);
    periodo[strcspn(periodo, "\n")] = '\0';
    fflush(stdin);

    printf("Suas disciplinas: ");
    fgets(disciplinas, sizeof(disciplinas), stdin);
    disciplinas[strcspn(disciplinas,"\n")] = '\0';
    fflush(stdin);




    printf("\n*Cadastro completo!*\nAqui estao os dados fornecidos: \n Nome: %s; \n Idade: %d; \n Matricula: %d; \n Endereco: %s; \n Curso: %s; \n Periodo: %s; \n Disciplinas: %s; \n--Cadastro Concluido--", nome, idade, matricula, endereco, curso, periodo, disciplinas);

   return 0;
}