#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0;
  int valDigitado = 0;

  printf("Informe a quantidade de X que vc deseja que seja repetidos: \n");
  scanf("%i", &valDigitado);

  while(x < valDigitado){
    printf("%i", x * 10);
    x = x + 1;
  }

}

