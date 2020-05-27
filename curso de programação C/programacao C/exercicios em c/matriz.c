#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  
  int n[3][3];
  int i,j;
  
  printf("favor digite numeros aleatorios: \n");
  for (i=0;i<3;i++){
      for (j=0;j<3;j++){
      scanf("%d",&n[i][j]);
      }
  }
  
  for (i=0;i<3;i++){
      printf (" \n ");
      for (j=0;j<3;j++){
      printf ("%d ",n[i][j]);
      }
  }
  
  
  getch();	
  return 0;
}
