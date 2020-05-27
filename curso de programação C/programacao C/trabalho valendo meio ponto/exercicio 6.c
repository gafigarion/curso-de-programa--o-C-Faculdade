#include <stdio.h>
#include <stdlib.h>
#define lin 3
#define col 3

int main()
{
  int matriz[lin][col];
  int i,j,soma;
  soma = 0;
  
  printf("digite 9 numeros:\n");
  for (i=0 ; i<lin ; i++){
      for (j=0 ; j<col ; j++){
          scanf("%d",&matriz[i][j]);
          soma = soma + matriz[i][j];
      }
  }
  printf("soma dos numeros e:%d\n",soma);
  
  getch();	
  return 0;
}
