#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int number;

  printf("Digite um número: ");
  scanf("%d", &number);

  printf("\n  O número digitado foi: %d ", number);
}
