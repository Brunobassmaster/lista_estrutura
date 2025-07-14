/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>
#include <string.h>
struct Pessoa
  {
  char nome[100];
  int idade;
  char endereco[100];
  };

int main()
  {
  struct Pessoa pessoa1;
  strcpy(pessoa1.nome, "Nathalia mundim");
  pessoa1.idade = 20;
  strcpy(pessoa1.endereco, "rua jose amilcar congro bastos");
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Endereco: %s\n", pessoa1.endereco);
  return 0;
  }
