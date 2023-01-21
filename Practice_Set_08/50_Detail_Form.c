#include <stdio.h>

struct personal {
    char name[50];
    char doj[20];
    float salary;
};

int main() {
	
    printf("\tInformation Form\n");
    printf("==========================================\n");
    
    struct personal person[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\n\nEnter name for person %d: ", i+1);
        scanf("%s", person[i].name);
        printf("\nEnter date of joining for person %d: ", i+1);
        scanf("%s", person[i].doj);
        printf("\nEnter salary for person %d: ", i+1);
        scanf("%f", &person[i].salary);
    }

    for (i = 0; i < 5; i++) {
    	printf("------------------------------------------\n");
    	printf("\nFor Person %d : ",i+1);
        printf("\n\nName: %s\n", person[i].name);
        printf("\nDate of Joining: %s\n", person[i].doj);
        printf("\nSalary: %.2f\n", person[i].salary);
        printf("------------------------------------------\n");
    }

    return 0;
}

