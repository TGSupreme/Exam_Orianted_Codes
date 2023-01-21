#include <stdio.h>

struct student_record {
    char name[50];
    char branch[50];
    int total_marks;
};

int main() {
    struct student_record student[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter name for student %d: ", i+1);
        scanf("%s", student[i].name);
        printf("Enter branch for student %d: ", i+1);
        scanf("%s", student[i].branch);
        printf("Enter total marks for student %d: ", i+1);
        scanf("%d", &student[i].total_marks);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\n", student[i].name);
        printf("Branch: %s\n", student[i].branch);
        printf("Total Marks: %d\n", student[i].total_marks);
    }

    return 0;
}

