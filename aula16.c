#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
  char c;
  printf("digite um char em letra maiuscula:\n");
  scanf("%c", &c);

  if (c >= 'a') {
    printf("Segue a letra que vc digitou em upper case: %c\n", toupper(c));
  }

  return 0;
}
