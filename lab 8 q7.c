#include <stdio.h>
int main(){
	int a, b, i,j;
	int prime;
	printf("enter starting number of the range: ");
	scanf("%d", &a);
	printf("enter ending number of the range: ");
	scanf("%d", &b);
	printf("\nPrime numbers:\n");
	for(i=a; i<=b; i++){
		if(i<2)
		continue;
		prime =1;
		for (j=2; j<=i/2 ; j++){
			if(i%j==0){
				prime =0;
				break;
			}
			
		}
		if (prime==1)
	  printf("%d ", i);
		
	}
	return 0;
}
