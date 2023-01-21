#include <stdio.h>

struct student {
    char name[20];
    int age;
    float marks;
    char dept[20];
};

int main() {
    struct student s;

    printf("\tStudent information Form\n");
    printf("==========================================\n");

    printf("\nEnter Name : ");
    gets(s.name);

    printf("\nEnter Department : ");
    gets(s.dept);
    
    printf("\nEnter Age : ");
    scanf("%d", &s.age);

    printf("\nEnter Marks : ");
    scanf("%f", &s.marks);
    


    printf("\n\n------------------------------------------");
    printf("\n\tStudent Information\n");
    printf("------------------------------------------\n");
    printf("Name : %s\n", s.name);
    printf("\nDepartment : %s\n", s.dept);
    printf("\nAge : %d\n", s.age);
    printf("\nMarks : %.2f\n", s.marks);
    printf("------------------------------------------\n");
    return 0;
}

