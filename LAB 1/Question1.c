#include<stdio.h>
#include<conio.h>


int main()
{
	int i, j, sum = 0, size, count = 0, start, end;
	float monthly_avg[12] = { 0.f };
	float range = 0;
	
	printf("Enter the number of years you want to input the data of:\n");
	scanf_s("%d", &size);

	int* years = malloc(sizeof(int*) * size);
	float* avg_of_years = malloc(sizeof(float*) * size);
	
	int** table = malloc(sizeof(int*) * size);
	for (i = 0; i < size; i++)
		 table[i] = malloc(sizeof(int*) * 12);

	//input data
	for (i = 0; i < size; i++)
	{
		printf("Enter the data for Year %d\n", i+1);
		for (j = 0; j < 12; j++)
		{
			printf("Month %d ", j + 1);
			scanf_s("%d", &table[i][j]);
		}
	}

	//yearly average
	for (i = 0; i < size; i++)
	{
		int temp_sum = 0;
		for (j = 0; j < 12; j++)
		{
			temp_sum += table[i][j];
		}
		avg_of_years[i] = temp_sum / 12.f;

	}
	
	for (int k= 0; k< 12; k++)
	{
		float temp = 0;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < 12; j++)
			{
				if (j == count)
				temp += table[i][j];
			}
		}
		monthly_avg[k] = temp / size;
		count++;
	}

	printf("Monthly averages are:\n");
	for (int k = 0; k < 12; k++)
	{
		printf("Month %d\t\t %f\n", k + 1, monthly_avg[k]);
	}

	printf("\nYearly averages are;\n");
	for (i = 0; i < size; i++)
	{
		printf("Year %d - %f\n", i + 1, avg_of_years[i]);
	}

	printf("\n Enter the year number to start");
	scanf_s("%d", &start);
	printf("\n Enter the year number to end");
	scanf_s("%d", &end);

	for (i = start - 1; i < end - 1; i++)
	{
		range += avg_of_years[i];
	}
	printf("\nAverage of years over the range is: %f", range / (end-start));
}