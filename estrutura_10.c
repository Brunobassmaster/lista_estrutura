#include <stdio.h>
#include <string.h>

struct Atleta
  {
  char nome[100];
  char esporte[100];
  int idade;
  float altura;
  };
void trocar(struct Atleta *a, struct Atleta *b)
  {
  struct Atleta temp = *a;
  *a = *b;
  *b = temp;
  }
int main()
  {
  struct Atleta atletas[5];
  strcpy(atletas[0].nome, "Carlos");
  strcpy(atletas[0].esporte, "Futebol");
  atletas[0].idade = 24;
  atletas[0].altura = 1.80;
  strcpy(atletas[1].nome, "Joana");
  strcpy(atletas[1].esporte, "Vôlei");
  atletas[1].idade = 22;
  atletas[1].altura = 1.85;
  strcpy(atletas[2].nome, "Ricardo");
  strcpy(atletas[2].esporte, "Natação");
  atletas[2].idade = 28;
  atletas[2].altura = 1.78;
  strcpy(atletas[3].nome, "Ana");
  strcpy(atletas[3].esporte, "Basquete");
  atletas[3].idade = 26;
  atletas[3].altura = 1.90;
  strcpy(atletas[4].nome, "Bruno");
  strcpy(atletas[4].esporte, "Tênis");
  atletas[4].idade = 30;
  atletas[4].altura = 1.76;
  int i, j;
  for (i = 0; i < 4; i++)
    {
    for (j = i + 1; j < 5; j++)
      {
      if (atletas[i].idade < atletas[j].idade)
        {
        trocar(&atletas[i], &atletas[j]);
        }
      }
    }
  printf("Atletas em ordem de idade (mais velho para mais novo):\n\n");
  for (i = 0; i < 5; i++)
    {
    printf("Nome: %s\n", atletas[i].nome);
    printf("Esporte: %s\n", atletas[i].esporte);
    printf("Idade: %d\n", atletas[i].idade);
    printf("Altura: %.2f m\n\n", atletas[i].altura);
    }

  return 0;
  }

