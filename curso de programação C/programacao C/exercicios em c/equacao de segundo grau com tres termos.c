#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int a,b,c,delta;
  float x1,x2;
  
  printf("digite os valores de a,b,c\n");
  scanf ("%d%d%d",&a,&b,&c);
  
  delta = pow (b,2) - 4 * a * c;
  
  if (delta>=0){
     x1 = (-b + sqrt (delta))/2*a;
     x2 = (-b - sqrt (delta))/2*a;
     printf ("x1 = %.2f, e x2 = %.2f\n",x1,x2);
  }
  else
      printf("nao possue raizes reais");
  
  getch();	
  return 0;
}
