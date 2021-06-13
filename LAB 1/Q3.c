// 3. Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
#include<stdio.h>
struct Student {
    int marks;
    char name[50];
};
int main() {
    struct Student stu[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter the name of student %i:\n",i+1);
        scanf("%s", stu[i].name);
        printf("Enter the marks obtained by student %i:\n",i+1);
        scanf("%d", &stu[i].marks);
    }
    printf("Name\t|\tMarks\n");
    printf("--------|--------");
    for (i = 0; i < 5; i++) {
        printf("\n%s\t|\t%i", stu[i].name, stu[i].marks);
    }
    return 0;
}