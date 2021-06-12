//Program 1
//1. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int start_year = 0;
	int end_year = 0;
	printf("Enter the starting year of expenditure: ");
	scanf("%d", &start_year);
	printf("Enter the end year of expenditure: ");
	scanf("%d", &end_year);
	int range = end_year - start_year + 1;
	int* expenses = malloc(range * 12 * sizeof(*expenses));
	
	for(int i = 0; i < range; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			printf("Enter expenditure for year %d, month %d ", start_year + i, j + 1); 
			scanf("%d", &expenses[i * 12 + j]);
		}
	}
	
	int total_sum = 0;
	float average_over_months[12] = {0};
	printf("\nAverage of each month over the years\n");
	printf("Month\t\tYears\t\tAverage\n");
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < range; j++)
			average_over_months[i] += expenses[j * 12 + i];
		average_over_months[i] /= (float)range;
		
		printf("%-8d \t%-8d \t%-8.2f\n", i + 1, range, average_over_months[i]);
	}
	
	printf("\nYearly average\n");
	printf("Year\t\tAverage\n");
	float* yearly_average = malloc(range * sizeof(*yearly_average));
	for(int i = 0; i < range; i++)
	{
		for(int j = 0; j < 12; j++)
			yearly_average[i] += expenses[i * 12 + j];
		yearly_average[i] /= 12.0f;
		printf("%-8d \t%-8.2f\n", start_year + i, yearly_average[i]);
	}
	
	return 0;
}


//Program 2
/*
//Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

#include <stdio.h>

int main()
{
	char* input = "idea without execution is worthless";
	char* ptr = input;
	while(*ptr++ != '\0')
		if(*ptr == 'c') break;
	printf("Position of c starting from 0 is %d\n", (int)(ptr - input));
	return 0;
}
*/

/*
//Program 3
//Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
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
*/


//Program 4
/* 
//Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.

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
	
	int number_of_students;
	printf("Enter number of students\n");
	scanf("%d", &number_of_students);
	int size = sizeof(Student) * number_of_students;
	Student* students = malloc(size);
	
	if(students)
	{
		for(int i = 0; i < number_of_students; i++)
		{
			char data[100];
			
			printf("Enter the student's name: ");
			scanf("%s", &data);
			students[i].name = malloc(sizeof(char) * 100);
			strcpy(students[i].name, data);
			
			printf("Enter the student's Address: ");
			scanf("%s", &data);
			students[i].address = malloc(sizeof(char) * 100);
			strcpy(students[i].address, data);
			
			printf("Enter the student's phone no.: ");
			scanf("%s", &data);
			students[i].phone_no = malloc(sizeof(char) * 100);
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
		file = fopen("data.txt", "r");
		
		for(int i = 0; i < number_of_students; i++)
		{
			Student stu = students[i];
			char temp_name[100];
			char temp_addr[100];
			char temp_phone[100];
			int roll;
			fscanf(file, "%s %d %s %s", temp_name, &roll, temp_addr, temp_phone);
			printf("Name : %s\t Roll : %d\t Addr : %s\t Phone: %s\n", temp_name, roll, temp_addr, temp_phone);
		}
		
		
	}
	
	
	return 0;
}
 */