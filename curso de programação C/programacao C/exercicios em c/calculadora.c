#include <stdio.h>
#include <stdlib.h>
#iclude <conio.h>

float soma(float x,float y){
     float resultado = x + y;
     return (resultado);
}

void ler(float x,float y){
    printf ("digite 2 numeros: \n");
    scanf ("%f%f",&x,&y);
    x = &n1;
    y = &n2;
}

int main(void)
{
    
  void ler(float x,float y);  
  float soma(float x,float y);
  float n1,n2;
  float *x,*y; /* ponteiro que aponta para n1 e n2 */
  float resultado;
  int op;

  
  printf ("Escolha a operacao que deseja efetuar\n");
  printf ("Escolha 1 para soma: \n");
  printf ("Escolha 2 para subtracao: \n");
  printf ("Escolha 3 para multiplicacao: \n");
  printf ("Escolha 4 para divisao: \n");
  
  scanf ("%d",&op);
  switch(op){
             
             case 1:
                  ler(n1,n2);
                  soma(n1,n2);
                  printf ("%f",resultado);
           
  }
  
  
  
  getch();	
  return 0;
}
