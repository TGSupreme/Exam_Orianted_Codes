#include <stdio.h>

int main()
{
//54. Write a program to print address of variable using pointer.
	printf("\tAddress Of Variable\n");
	printf("=================================\n\n");

	int x ;
    printf("ENter The Value Of X : ");
    scanf("%d",&x);
    int *ptr = &x;
    
    printf("\n\n---------------------------------\n");
    printf("\nThe Address Of X Is : %p\n", ptr);
    printf("\n---------------------------------\n");

    return 0;
}

