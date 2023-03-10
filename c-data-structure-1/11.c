#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  float n1, n2, n3;

  printf("Insira o primeiro valor: ", &n1);
  scanf("%f", &n1);

  printf("Insira o segundo valor: ", &n2);
  scanf("%f", &n2);

  printf("Insira o terceiro valor: ", &n3);
  scanf("%f", &n3);

  float mean = (n1 + n2 + n3) / 3;

  printf("A média é:  %f", mean);
}
