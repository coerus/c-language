#include <stdio.h>
#include <stdlib.h>

int main(){
  int i = 10;
  printf("Digite um numero diferente de 5: \n");
  scanf("%i", &i);

  if(i!=5)
  {
    printf("A expressao e \n");
    printf("TRUE\n");
  }else {
    printf("\nA expressao e:\n");
    printf("FALSE\n");
    
  }


  return 0;
}
