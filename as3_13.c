#include <stdio.h>

void main(){
	
	int i,j,k,n=4;
	
	for(i=0;i<n;i++){
		k=65;
		for(j=0;j<=i;j++){
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}
