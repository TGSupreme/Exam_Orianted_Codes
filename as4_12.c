#include <stdio.h>

int main(){
//12 Write a program to add two 2×2 matrix

	int row=2,col=2,i,j;
	int a[row][col],b[row][col],c[row][col];
	
        for (int i = 0; i < row; i++) {
               for (int j = 0; j < col; j++) {
                         c[i][j] = 0;
               }
        }


	printf("Enter The 1st Matrix A  \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter The Element [%d,%d] Of A : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n");
	printf("Enter The 2nd Matrix B  \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter The Element [%d,%d] Of B : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n");
	printf("A + B = \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			c[i][j] = (a[i][j] + b[i][j]);
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
