//Program 1
//1. Write a program to find the average expenditure of a company for each month of each year, each year 
//and average over the range of years specified. Use arrays to construct a table, display the table of expenditure
//and find the sum and average.
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
	memset(yearly_average, 0, range * sizeof(*yearly_average));
	for(int i = 0; i < range; i++)
	{
		for(int j = 0; j < 12; j++)
			yearly_average[i] += expenses[i * 12 + j];
		yearly_average[i] /= 12.0f;
		printf("%-8d \t%-8.2f\n", start_year + i, yearly_average[i]);
	}
	
	return 0;
}