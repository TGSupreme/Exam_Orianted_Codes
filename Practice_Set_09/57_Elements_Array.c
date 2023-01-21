#include <stdio.h>

int main() {
	
	printf("\tElements Of Array\n");
	printf("===================================\n\n");
	
    int arr[5] = {18, 19, 20, 21, 22};
    int *ptr;
    int i;

    ptr = arr;

    for (i = 0; i < 5; i++) {
        printf("\nThe value of element %d is: %d\n", i, *(ptr + i));
    }

    return 0;
}

