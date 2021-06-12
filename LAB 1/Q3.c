// 3. Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
#include <stdio.h>
#include <string.h>

struct Result{
        char name[50];
        int marks;
}st1, st2, st3, st4, st5;

int main(){
    int nos;
    printf("Enter the number of students: ");
    scanf("%d", &nos);

    struct Result student1;
    strcpy(student1.name, "Prabigay");
    student1.marks = 10;

    printf("Result:\nStudent's Name:\tMarks:\n%s\t%d", student1.name, student1.marks);
    
    
    return 0;
}