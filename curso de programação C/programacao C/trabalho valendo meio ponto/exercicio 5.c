#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define col 20

int main()
{
  char nome[col];
  printf("digite um nome:\n");
  gets(nome);
  printf("Maiuscula %s\n",strupr(nome));
  printf("Minuscula %s\n",strlwr(nome));
  printf("quantidade de caracteres %d\n",strlen(nome));
  
  
  
  
  
  getch();	
  return 0;
}
