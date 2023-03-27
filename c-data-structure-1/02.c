#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  char username[20];

  printf("Digite seu nome: ");
  scanf("%s", &username);

  printf("\n  Bem-vindo %s ", username);
}
