#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define col 20

int contador (char palavra[]){
   int qtvogais,i,j;
   char *vogais,check;
   vogais = "aeiouAEIOU";
   qtvogais = 0;
   for (i = 0; palavra[i] != '\0'; ++i) {
      check = palavra[i]; 
      for (j = 0; vogais[j] != '\0'; ++j) {
         if (vogais[j] == check) {
            qtvogais = qtvogais + 1;
            break;
         }
      }
   }
   return qtvogais;
}



int main()
{
  char nome[col]={};
  int n;

  printf("Digite um nome:\n");
  gets(nome);
  n = contador(nome);;
  printf(" quantidade de voagais e: %d",n);
  
  getch();	
  return 0;
}
