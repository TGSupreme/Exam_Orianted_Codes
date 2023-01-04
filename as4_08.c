#include <stdio.h>

void main(){
// Write a program to find out the largest of an array
	
	int a[15],max=0;
	
	for(i=0;i<15;i++){
		printf("Enter The Element [%d] : ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]>max){
			max=a[i];
		}
	}
	
	printf("maximum : %d",max);
	
}
