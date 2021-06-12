//Program 4
//Write a program to read name, rollno, address, and phone number of each student in your class
//using structure. Store the information in file so that you can recover the information later.
//While recovering the information from the file sort the information alphabetically according to the name.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char* name;
	char* address;
	char* phone_no;
	int roll_no;
} Student;

int main()
{
	
	char choice;
	printf("Read or write(w/r)? ");
	scanf("%c", &choice); 
	
	int number_of_students;
	printf("Enter number of students\n");
	scanf("%d", &number_of_students);
	int size = sizeof(Student) * number_of_students;
	Student* students = malloc(size);
	if(students)
	{
		for(int i = 0; i < number_of_students; i++)
		{
			Student* stu = &students[i];
			stu->name = malloc(sizeof(char) * 100);
			stu->address = malloc(sizeof(char) * 100);
			stu->phone_no = malloc(sizeof(char) * 100);
			
		}
		if(choice == 'w' || choice == 'W')
		{
			for(int i = 0; i < number_of_students; i++)
			{
				char data[100];
				printf("Enter the student's name: ");
				scanf("%s", &data);
				strcpy(students[i].name, data);
				
				printf("Enter the student's Address: ");
				scanf("%s", &data);
				strcpy(students[i].address, data);
				
				printf("Enter the student's phone no.: ");
				scanf("%s", &data);
				strcpy(students[i].phone_no, data);
				
				printf("Enter the student's roll no.: ");
				scanf("%d", &students[i].roll_no);
			}
			
			FILE* file = fopen("data.txt", "w+");
			
			for(int i = 0; i < number_of_students; i++)
			{
				Student stu = students[i];
				fprintf(file, "%s %d %s %s\n", stu.name, stu.roll_no, stu.address, stu.phone_no);
			}
			fclose(file);
		}
		else
		{
			FILE* file = fopen("data.txt", "r");
			
			for(int i = 0; i < number_of_students; i++)
			{
				Student* stu = &students[i];
				char temp_name[100];
				char temp_addr[100];
				char temp_phone[100];
				int roll;
				
				fscanf(file, "%s %d %s %s", temp_name, &roll, temp_addr, temp_phone);
				strcpy(stu->name, temp_name);
				stu->roll_no = roll;
				strcpy(stu->address, temp_addr);
				strcpy(stu->phone_no, temp_phone);
			}
			
			for(int i = 0; i < number_of_students; i++)
			{
				for(int j = i; j < number_of_students; j++)
				{
					if(strcmp(students[i].name, students[j].name) > 0)
					{
						Student tempStudent;
						tempStudent = students[i];
						students[i] = students[j];
						students[j] = tempStudent;
					}
				}
			}
			for(int i = 0; i < number_of_students; i++)
				printf("Name : %s, Address: %s, Roll: %d, Phone: %s\n", students[i].name, students[i].address, students[i].roll_no, students[i].phone_no);
		}
	}
	return 0;
}