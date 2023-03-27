#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int primeiro, razao, termo;

  printf("Digite o primeiro número da sequência: ");
  scanf("%d", &primeiro);

  printf("Digite a razão da sequência: ");
  scanf("%d", &razao);

  printf("Os dez primeiros termos da sequência são:\n");

  termo = primeiro;
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", termo);
    termo += razao;
  }
}