#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

  int contador = 0;
  char c;
  do{
    contador += 1;
    printf("Digite 0 se quiser sair do looping");
    printf("%i", contador);
    c = getchar();
  }while(c != '0');

  return 0;
}
