#include <stdio.h>

int main()
{
	
//54. Write a program to print address of variable using pointer.

	printf("\t\tAddress Of Variable\n");
	printf("================================================\n\n");

	int x ;
    int *ptr = &x;
    
    printf("Enter The Value of X : ");
    scanf("%d",&x);

    printf("\n\n------------------------------------------------\n\n");
    printf("The address of x is: %p\n", (void*)ptr);
    printf("\n------------------------------------------------\n");
    
    return 0;
}

