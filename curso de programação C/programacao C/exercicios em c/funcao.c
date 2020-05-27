#include <stdio.h>
#include <stdlib.h>

int multiplica(int x,int y){
      int resposta = x * y;
      return resposta;
}


int main(void)
{
  int resposta; 
  int a,b;
  int multiplica(int x,int y);

  printf("favor digite 2 numeros:\n");
  scanf("%d%d",&a,&b);
  resposta = multiplica(a,b);
  printf("%d",resposta);
  
  getch();	
  return 0;
}
