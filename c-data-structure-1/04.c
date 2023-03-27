#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(void)
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  bool logicalValue;

  printf("Digite um valor lógico (true ou false): ");
  scanf("%d", &logicalValue);

  printf("\n  O valor oposto é: %d ", !logicalValue);
}
