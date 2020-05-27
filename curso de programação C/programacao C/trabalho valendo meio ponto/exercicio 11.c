#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5


int main() {
	
	int matriz[lin][col];
	int i,j;
	
	for (i=0 ; i<lin ; i++){
		for (j=0 ; j<col ;j++){
			matriz[i][j] = i + j ;
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
