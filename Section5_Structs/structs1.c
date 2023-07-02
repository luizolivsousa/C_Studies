#include <stdio.h>
#include <string.h>

struct stStudent {
    char id[10];
    char name[100];
    char course[50];
    int birthYear;
};

int main() {
    struct stStudent student1;

    printf("Student id: ");
    fgets(student1.id, 10, stdin);

    printf("Student name: ");
    fgets(student1.name, 100, stdin);

    printf("Student course: ");
    fgets(student1.course, 50, stdin);

    printf("Student birth year: ");
    scanf("%d", &student1.birthYear);

    printf("Student data:\n");
    printf("Id: %s", student1.id);
    printf("Name: %s", student1.name);
    printf("Course: %s", student1.course);
    printf("Birth year: %d", student1.birthYear);

    return 0;
}
