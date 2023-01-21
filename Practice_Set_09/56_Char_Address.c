#include <stdio.h>

int main() {
	
//56. Write a C program to print the address of character and the character of string using
//pointer.

	printf("\t\tAddress Of Character\n");
	printf("================================================\n\n");
	
    char str[] = "Supreme";
    char *ptr;

    ptr = str;

    printf("The string is: %s\n", str);
    printf("\n");

    while (*ptr != '\0') {
        printf("The address of character %c is: %p\n", *ptr, ptr);
        printf("The character is: %c\n", *ptr);
        printf("\n");
        ptr++;
    }

    return 0;
}

