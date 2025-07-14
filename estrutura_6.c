#include <stdio.h>
#include <string.h>

struct Aluno
  {
  char disciplina[100];
  int matricula;
  char nome[100];
  int nota1;
  int nota2;
  int nota3;
  float media;
  };

int main()
  {
  struct Aluno aluno1;
  strcpy(aluno1.nome, "Bruno");
  aluno1.matricula = 33456;
  strcpy(aluno1.disciplina, "Historia");
  aluno1.nota1 = 8;
  aluno1.nota2 = 6;
  aluno1.nota3 = 10;
  aluno1.media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3) / 3.0;

  struct Aluno aluno2;
  strcpy(aluno2.nome, "Joao");
  aluno2.matricula = 24569;
  strcpy(aluno2.disciplina, "Biologia");
  aluno2.nota1 = 5;
  aluno2.nota2 = 7;
  aluno2.nota3 = 8;
  aluno2.media = (aluno2.nota1 + aluno2.nota2 + aluno2.nota3) / 3.0;

  struct Aluno aluno3;
  strcpy(aluno3.nome, "Osvaldo");
  aluno3.matricula = 33778;
  strcpy(aluno3.disciplina, "Matematica");
  aluno3.nota1 = 10;
  aluno3.nota2 = 9;
  aluno3.nota3 = 4;
  aluno3.media = (aluno3.nota1 + aluno3.nota2 + aluno3.nota3) / 3.0;

  struct Aluno aluno4;
  strcpy(aluno4.nome, "Nathalia");
  aluno4.matricula = 66879;
  strcpy(aluno4.disciplina, "Matematica");
  aluno4.nota1 = 10;
  aluno4.nota2 = 7;
  aluno4.nota3 = 6;
  aluno4.media = (aluno4.nota1 + aluno4.nota2 + aluno4.nota3) / 3.0;

  struct Aluno aluno5;
  strcpy(aluno5.nome, "Jose");
  aluno5.matricula = 44534;
  strcpy(aluno5.disciplina, "Portugues");
  aluno5.nota1 = 6;
  aluno5.nota2 = 10;
  aluno5.nota3 = 3;
  aluno5.media = (aluno5.nota1 + aluno5.nota2 + aluno5.nota3) / 3.0;


  struct Aluno maior = aluno1;

  if (aluno2.media > maior.media)
    maior = aluno2;
  if (aluno3.media > maior.media)
    maior = aluno3;
  if (aluno4.media > maior.media)
    maior = aluno4;
  if (aluno5.media > maior.media)
    maior = aluno5;


  printf("Aluno com maior media:\n");
  printf("Disciplina: %s\n", maior.disciplina);
  printf("Nome: %s\n", maior.nome);
  printf("Matricula: %d\n", maior.matricula);
  printf("Nota 1: %d\n", maior.nota1);
  printf("Nota 2: %d\n", maior.nota2);
  printf("Nota 3: %d\n", maior.nota3);
  printf("Media: %.2f\n", maior.media);

  return 0;
  }
