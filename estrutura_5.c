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

int pontoDentro(struct Retangulo r, struct Ponto p)
  {
  if (p.x >= r.superiorEsquerdo.x && p.x <= r.inferiorDireito.x && p.y <= r.superiorEsquerdo.y && p.y >= r.inferiorDireito.y)
    {
    return 1;
    }
  return 0;
  }

int main()
  {
  struct Retangulo r;
  struct Ponto p;
  printf("Digite as coordenadas do ponto superior esquerdo (X Y): ");
  scanf("%f %f", &r.superiorEsquerdo.x, &r.superiorEsquerdo.y);
  printf("Digite as coordenadas do ponto inferior direito (X Y): ");
  scanf("%f %f", &r.inferiorDireito.x, &r.inferiorDireito.y);
  printf("Digite as coordenadas do ponto a verificar (X Y): ");
  scanf("%f %f", &p.x, &p.y);
  if (pontoDentro(r, p))
    {
    printf("O ponto est� DENTRO do ret�ngulo.\n");
    }
  else
    {
    printf("O ponto est� FORA do ret�ngulo.\n");
    }
 return 0;
  }

