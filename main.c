#include <stdio.h>
/*Elabore um algoritmo receber 4 notas. Exiba a média ponderada das notas, sendo que as duas primeiras notas tem peso 2 e a duas últimas tem peso 3. Caso a média seja maior ou igual a 7, anuncie que o aluno foi aprovado. Caso contrário, está reprovado.
*/
int main(void) {
  char aluno[30];
  float n1,n2,n3,n4;
  float media;
  printf("Digite o nome do aluno\n");
  scanf("%s", aluno);
  printf("Digite a n1");
  scanf("%f",&n1);
  printf("Digite a n2");
  scanf("%f", &n2);
  printf("digite a n3");
  scanf("%f", &n3);
  printf("digite a n4");
  scanf("%f",&n4);
  
  media=(n1*2+n2*2+n3*3+n4*3)/10;
  if (media>=7) {
  printf("A sua media e de %f e voce foi aprovado\n", media);
  } else{
  printf("A sua media e de %f e voce foi reprovado\n", media);
  }

  return 0;
}