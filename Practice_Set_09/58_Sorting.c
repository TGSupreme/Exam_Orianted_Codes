#include <stdio.h>

void sort(int *arr, int n);

int main() {
	
	printf("\t\tSorting\n");
	printf("======================================\n\n");
	
	
	int size;
	printf("Enter The Number Of Elements : ");
	scanf("%d",&size);
    int arr[size];
    int i;
    
	for(i=0;i<size;i++){
		
		printf("\nEnter The Element [%d] : ",i+1);
		scanf("%d",&arr[i]);
		}
	
	printf("\n\n--------------------------------------");
    printf("\n\nBefore Sorting: ");
    
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n\n");

    sort(arr, size);

    printf("\nAfter sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n--------------------------------------\n\n");
	
    return 0;
}
	
void sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
