#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "pt-BR");

  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  printf("\n  O número digitado foi: %d ", number);
}
