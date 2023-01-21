#include <stdio.h>

void swap(int *a, int *b);

int main() {
	
//55. Write a C program to swap the two values using pointers.
	printf("\tSwapping\n");
	printf("============================\n\n");
	
    int x = 6, y = 9;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("\nAfter swap: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
