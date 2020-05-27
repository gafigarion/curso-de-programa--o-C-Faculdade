#include <stdio.h>
#include <stdlib.h>

int conversao (int a,int b,int c){
    int resposta = (((a * 60) + b ) * 60) + c;
    return (resposta);
}

int main(void)
{
  int h,m,s,resposta;
  int conversao (int a,int b,int c);
  
  printf ("Digite a hora que queira converter: ");
  scanf ("%d%d%d",&h,&m,&s);
  resposta = conversao (h,m,s);
  printf ("%d",resposta);
  
  getch();	
  return 0;
}
