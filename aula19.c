#include <stdio.h>
#include <stdlib.h>

int main(){
  int inf, adolescencia, adul, vl;
  
  inf = 11;

  adolescencia = 12;

  adul = 21;

  vl = 75;

 int idade = 0;

  printf("Digite a idade uma pessoa: \n");
  scanf("%i", &idade);

  if (idade <= inf) {
    printf("A pessoa esta na infancia\n");
  }   
  if (idade <= adolescencia) {
    printf("a pessoa esta na adolescencia\n");
  }

  if (idade >= adul){
    printf("A pessoa esta na fase adulta\n");
  }  

  if (idade >= vl) {
    printf("A pessoa esta na fase da velhice\n");
  }

  return 0;
  
}
