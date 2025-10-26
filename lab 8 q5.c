#include <stdio.h>
int main(){
	int matrix[2][2];
	int i, j;
	for (i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("enter the element for row %d column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nmatrix:\n");
	for (i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
		
	}
	
	printf("transpose of this matrix:\n");
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
return 0;	
}
