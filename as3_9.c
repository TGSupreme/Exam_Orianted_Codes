#include <stdio.h>

int main(){
	//Write a C program to find 1+1/2! +1/3! +1/4! +.....+1/n!
	
	int i,n,fact=1;
	float sum=0;
	n=5;
	
	for(i=1;i<=n;i++){
		fact = fact * i;
		sum = sum + (1.0/fact);
	}
	
	printf("%d",sum);
	
	
	
	return 0;
}
