#include <stdio.h>

int main() {
	
//Write a program in c for multiply two matrices A and B of dimensions pXq and qXr
//respectively and store the result in third matrix C.
//Supreme___

    int p, q, r,  i, j, k;

    printf("Enter The Value Of P: ");
    scanf("%d", &p);

    printf("Enter The Value Of Q: ");
    scanf("%d", &q);
    
    printf("Enter The Value Of R: ");
    scanf("%d", &r);

    int a[p][q], b[q][r], c[p][r];
    
    for (i = 0; i < p; i++) {
	for (j = 0; j < r; j++) {
        c[i][j] = 0;
    	}
    }
    
    printf("\n\n");

    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
        	printf("Enter The Element [%d,%d] : ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n\n");

    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < q; i++) {
        for (j = 0; j < r; j++) {
        	printf("Enter The Element [%d,%d] : ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\n\n");

    printf("A * B = C : \n\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            for (k = 0; k < q; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

//    printf("A * B = C : \n");
//    for (i = 0; i < p; i++) {
//        for (j = 0; j < r; j++) {
//            printf("%d ", C[i][j]);
//        }
//        printf("\n");
//    }

    return 0;
}

