#include <stdio.h>

struct personal {
    char name[50];
    char doj[20];
    float salary;
};

int main() {
    struct personal person[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name for person %d: ", i+1);
        scanf("%s", person[i].name);
        printf("Enter date of joining for person %d: ", i+1);
        scanf("%s", person[i].doj);
        printf("Enter salary for person %d: ", i+1);
        scanf("%f", &person[i].salary);
    }

    printf("\nInformation for 5 people:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", person[i].name);
        printf("Date of Joining: %s\n", person[i].doj);
        printf("Salary: %.2f\n", person[i].salary);
    }

    return 0;
}

