#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int value;

  printf("Insira um valor: ", &value);
  scanf("%d", &value);

  if (value == 1)
  {
    printf("O valor não é um número primo");
  }
  else if (value == 2 || value == 3)
  {
    printf("O valor é um número primo");
  }
  else if (value % 2 == 0 || value % 3 == 0 || value % 5 == 0 || value % 7 == 0)
  {
    printf("O valor não é um número primo");
  }
  else
  {
    printf("O valor é um número primo");
  }
}
