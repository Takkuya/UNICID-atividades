#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float firstValue, secondValue;

  printf("Insira o primeiro valor: ", &firstValue);
  scanf("%f", &firstValue);

  printf("Insira o segundo valor: ", &secondValue);
  scanf("%f", &secondValue);

  float sum = firstValue + secondValue;

  printf("A soma é:  %f", sum);
}
