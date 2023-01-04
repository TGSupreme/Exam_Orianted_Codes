#include <stdio.h>

int main(){
	
	int i,j,k,n=3;
	
	for(i=0;i<n;i++){
		for(j=i;j<n-1;j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d ",i+1);
		}
		printf("\n");
	}
	
	return 0;
}
