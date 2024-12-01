#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, " ");
  int num = 60;
  printf("Endereço da variável num: %p\n", &num);
}
