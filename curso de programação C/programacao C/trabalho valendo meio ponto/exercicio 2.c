#include <stdio.h>
#include <stdlib.h>
#define col 20

int main()
{
  int n[col];
  int i;
  
  while (i<col){
        n[i]= 2*i+10;
        i++;
  }
  while (i<col){
        printf("%d\n",n[i]);
        i++;
  }
  
  
  getch();	
  return 0;
}
