#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int firstValue, secondValue;

  printf("Insira o primeiro valor: ", &firstValue);
  scanf("%d", &firstValue);

  printf("Insira o segundo valor: ", &secondValue);
  scanf("%d", &secondValue);

  if (firstValue == secondValue)
  {
    printf("Digite valores diferentes");
  }
  else if (firstValue > secondValue)
  {
    printf("A divisão é: %d", firstValue / secondValue);
  }
  else
  {
    printf("A divisão é: %d", secondValue / firstValue);
  }
}
