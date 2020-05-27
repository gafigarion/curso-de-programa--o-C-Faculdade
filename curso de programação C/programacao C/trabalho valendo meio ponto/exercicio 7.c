#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define col 20

char axaultimaletra (char palavra[]){  
int i;
char letra;
letra = 'a';
  for ( i=0 ; i<col ; i++){
      if (palavra[i] == '\0'){
         letra = palavra[i-1];
         return letra;
         break;
      }
  }
} 


int main()
{
  char n1[col],n2[col],n3[col],n4[col],n5[col],letra;
  
  printf("digite 5 palavras:\n");
  gets(n1);
  gets(n2);
  gets(n3);
  gets(n4);
  gets(n5);

  printf("%c\n",axaultimaletra(n1));
  printf("%c\n",axaultimaletra(n2)); 
  printf("%c\n",axaultimaletra(n3)); 
  printf("%c\n",axaultimaletra(n4)); 
  printf("%c\n",axaultimaletra(n5));          
  
  

  
  
  getch();	
  return 0;
}
