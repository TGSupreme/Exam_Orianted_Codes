#include <stdio.h>

int main() {
	
    printf("\tWrite String In File\n");
    printf("==========================================\n");
    
    char str[100];
    printf("\nEnter A String: ");
    gets(str);

    FILE *fp;
    fp = fopen("example.txt", "w");

    if (fp == NULL) {
        printf("Error Opening File!\n");
        return 1;
    }

    fprintf(fp, "%s", str);
    fclose(fp);
    printf("\n------------------------------------------\n");
    printf("String Written To File Successfully!\n");
    printf("------------------------------------------\n");
    return 0;
}

