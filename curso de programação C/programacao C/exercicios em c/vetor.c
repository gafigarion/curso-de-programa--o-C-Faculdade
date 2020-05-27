#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n[5];
  int i;
  
  printf("digite 5 numeros:\n");
  for (i=0;i<5;i++){
      scanf ("%d",&n[i]);    
  }
  
  printf("numeros digitados foram:\n\n");
  for (i=0;i<5;i++){
      printf ("%d\n",n[i]);    
  }
  
  getch();	
  return 0;
  
}
