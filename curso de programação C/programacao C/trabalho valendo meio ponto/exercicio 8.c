#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5

int main() {
	
	int matriz[lin][col];
	int i,j,x;
	x = 0;
	
	for (i=4 ; i>=0 ; i--){
		for (j=4 ; j>=0 ; j--){
			x = x + 1;
			matriz[i][j] = x;	
		}
		
	}
	
	for (i=0 ; i<lin ; i++){
		for (j=0 ; j<col ; j++){
			printf("%4.d",matriz[i][j]);	
		}
		printf("\n");
	}

	
	
	getch();
	return 0;
}
