#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "pt_BR.UTF-8");
  printf("Olá aluno hoje é sexta-feira");
}
