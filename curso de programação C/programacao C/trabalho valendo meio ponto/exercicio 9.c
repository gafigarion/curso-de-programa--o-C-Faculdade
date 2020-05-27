#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5

int main() {
	
	int matriz[lin][col];
	int i,j,x,soma;
	x = 0;
	soma = 0;
	
	for (i=4 ; i>=0 ; i--){
		for (j=4 ; j>=0 ; j--){
			x = x + 1;
			matriz[i][j] = x;
			if (i==j){
				soma = soma + matriz[i][j];
			}	
		}
		
	}
	
	for (i=0 ; i<lin ; i++){
		for (j=0 ; j<col ; j++){
			printf("%4.d",matriz[i][j]);	
		}
		printf("\n");
	}
	
	printf("Soma da diagonal principal e: %d\n",soma);

	
	
	getch();
	return 0;
}
