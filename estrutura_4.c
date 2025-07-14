/*4) Crie uma estrutura chamada Ret�ngulo. Essa estrutura dever� conter o ponto superior
esquerdo e o ponto inferior direito do ret�ngulo. Cada ponto � definido por uma estrutura
Ponto, a qual cont�m as posi��es X e Y. Fa�a um programa que declare e leia uma
estrutura Ret�ngulo e exiba a �rea e o comprimento da diagonal e o per�metro desse
ret�ngulo.*/

#include <stdio.h>


struct Ponto
  {
  float x;
  float y;
  };


struct Retangulo
  {
  struct Ponto superiorEsquerdo;
  struct Ponto inferiorDireito;
  };

float raizQuadrada(float n)
  {
  float x = n;
  float y = 1;
  float erro = 0.0001;
  while (x - y > erro)
    {
    x = (x + y) / 2;
    y = n / x;
    }
  return x;
  }

int main()
  {
  struct Retangulo r;
  float largura, altura, area, perimetro, diagonal;
  printf("Digite as coordenadas do ponto superior esquerdo (X Y): ");
  scanf("%f %f", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);
  printf("Digite as coordenadas do ponto inferior direito (X Y): ");
  scanf("%f %f", &r.inferiorDireito.x, &r.inferiorDireito.y);
  largura = r.inferiorDireito.x - r.superiorEsquerdo.x;
  altura = r.superiorEsquerdo.y - r.inferiorDireito.y;
  area = largura * altura;
  perimetro = 2 * (largura + altura);
  diagonal = raizQuadrada(largura * largura + altura * altura);
  printf("Area: %.2f\n", area);
  printf("Perimetro: %.2f\n", perimetro);
  printf("Diagonal: %.2f\n", diagonal);

  return 0;
  }
