#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  float firstValue, secondValue;

  printf("Insira o primeiro valor: ", &firstValue);
  scanf("%f", &firstValue);

  printf("Insira o segundo valor: ", &secondValue);
  scanf("%f", &secondValue);

  float sum = firstValue + secondValue;

  printf("A soma eh:  %f", sum);
}
