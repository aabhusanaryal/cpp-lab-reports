//Program 3
//Store and retrieve the name of the students and obtained
//marks in c programming in 1st semester using structure.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int marks;
	char* name;
} Student;

int main()
{
	Student* students;
	
	int number_of_students;
	printf("Enter number of students\n");
	scanf("%d", &number_of_students);
	students = malloc(sizeof(Student) * number_of_students);
	
	if(students)
	{
		for(int i = 0; i < number_of_students; i++)
		{
			char name[100];
			printf("Enter the student's name: ");
			scanf("%s", &name);
			students[i].name = malloc(sizeof(char) * 100);
			strcpy(students[i].name, name);
			printf("Enter the student's mark: ");
			scanf("%d", &students[i].marks);
		}
		
		for(int i = 0; i < number_of_students; i++)
			printf("Name: %s\t\t Mark:%d\n", students[i].name, students[i].marks);
	}
	return 0;
}