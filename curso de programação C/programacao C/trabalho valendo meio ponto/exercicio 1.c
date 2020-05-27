#include <stdio.h>
#include <stdlib.h>
#define col 20


int main()
{
  int n[col]={};
  int i;
  
  for (i=0 ; i<col ; i++){
      n[i] = 2 * i+ 10;
  }
  
  for (i=0 ; i<col ; i++){
     printf("%d\n",n[i]);
  }
  
  getch();	
  return 0;
}
