#include <stdio.h>

void main(){
//Write a program to store 10 elements in array given by user and to find maximum out
//of those 10 elements.
	int a[10],i,max;
	
	for(i=0;i<10;i++){
		printf("Enter the number [%d] : ",i+1);
		scanf("%d",&a[i]);
		
		if(i==0){
			max=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
		printf("\n");
	}
	printf("%d",max);
	
}
