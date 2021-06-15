#include<stdio.h>
int main() {
	int i,j,starting,ending,a[20][12],year_count,total_years; //can take data for upto 20 years
	float total=0; 
	float month_avg[12] = {0}, year_avg[20] = {0};
	printf("Enter total number of years for which data is to be entered:");
	scanf("%d",&total_years);
	for (i = 0; i < total_years; i++) { //creating table
		printf("Year %i:\n",i+1);
		for (j = 0; j < 12; j++) {
			printf("Enter value for month %i: ", j + 1);
			scanf("%i", &a[i][j]);
		}
	}
	for (i = 0; i < total_years; i++) { //displaying table and totalling values by month and by year 
		for (j = 0; j < 12; j++) {
			if (j == 0) {
				printf("Year %i:", i + 1);
			}
			month_avg[j] += a[i][j];
			year_avg[i] += a[i][j];
			printf(" %6i ", a[i][j]);
		}
		printf("\n");
	}
		for (j = 0; j < 12; j++) { //average by month
			printf("Month %i average= %f\n", j + 1, month_avg[j] / total_years);
		}
		for (i = 0; i < total_years; i++) { //average by year
			year_avg[i]/=12.0f;
			printf("Average for year %i= %f\n", i + 1, year_avg[i]);
		}
		printf("Enter starting and ending year:\n");
		scanf("%d %d",&starting,&ending);
		year_count=(ending-starting)+1;
		for(i=starting-1;i<ending;i++){ //average by range
			total+=year_avg[i];
		}
		printf("Avg between years %i and %i= %f\n",starting,ending,total/year_count);
	return 0;
}