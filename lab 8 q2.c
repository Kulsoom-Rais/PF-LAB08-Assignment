#include <stdio.h>
int main(){
	int i, N;
	printf("Enter the number: ");
	scanf("%d", &N);
	for (i=1; i<11; i++){
		printf("\n %d x %d = %d", N, i, N*i);
	}
	return 0;
}
