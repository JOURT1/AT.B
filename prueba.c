#include <stdio.h>

int main(int argc, char *argv[])
{
  char c1, c2, c3;
  printf("Ingrese los 3 caracteres\n");
  scanf("%c %c %c", &c1, &c2, &c3);
  printf("Los caracteres son: %c-%c-%c", c1, c2, c3);
  return 0;
}