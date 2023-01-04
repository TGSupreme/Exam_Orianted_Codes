#include <stdio.h>

int main(){
//11 Write a program to read and write a 2D array.
	int i,j,row,col;
	
	printf("ENter The Number Of rows : ");
	scanf("%d",&row);
	
	printf("Enter the number of column : ");
	scanf("%d",&col);
	printf("\n\n");
	
	int a[row][col];
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter The Element [%d , %d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n");
	for(i=0;i<row;i++){		
		for(j=0;j<col;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
