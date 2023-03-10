#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "pt-BR");
  printf("Olá aluno hoje é sexta-feira");
}
