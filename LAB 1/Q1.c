/// 1. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.
#include <stdio.h>

// The function below prints out the inputted data in tabulated form
void displayTable(int exp[][12], int size){
    printf("\nHere's your input, tabulated:\n");
    for(int i = 0; i<size; i++){
        printf("|  ");
        for(int j = 0; j<12; j++){
            printf("%d  |  ", exp[i][j]);
        }
        printf("\n");
    }
}

void displayMonthlyAvg(int exp[][12], int size){
    int sum[12] = {0};
    int avg[12] = {0};
    for(int i = 0; i<size; i++){
        for(int j = 0; j<12; j++){
            sum[j] += exp[i][j];
        }
    }
    for(int i=0; i<12; i++){
        avg[i]=sum[i]/size;
    }
    printf("\nHere's the monthly sum:\n");
    for(int i=0; i<12; i++){
        printf("%d\t", sum[i]);
    }
    printf("\n");
    printf("\nHere's the monthly average:\n");
    for(int i=0; i<12; i++){
        printf("%d\t", avg[i]);
    }
}

void displayYearlyAvg(int exp[][12], int size){
    int sum[100] = {0};
    int avg[100] = {0};
    for(int i = 0; i<size; i++){
        for(int j = 0; j<12; j++){
            sum[i] += exp[i][j];
        }
    }
    for(int i=0; i<size; i++){
        avg[i]=sum[i]/size;
    }
    printf("\nHere's the yearly sum:\n");
    for(int i=0; i<size; i++){
        printf("%d\t", sum[i]);
    }
    printf("\n");
    printf("\nHere's the yearly average:\n");
    for(int i=0; i<size; i++){
        printf("%d\t", avg[i]);
    }
}

void displayAvgOverTheRange(int exp[][12], int size){
    int sum[12] = {0};
    int avg[12] = {0};
    int range1, range2;

    printf("\nEnter first year of range:");
    scanf("%d", &range1);
    printf("\nEnter last year of range:");
    scanf("%d", &range2);
    for(int i = 0; i<size; i++){
        for(int j = 0; j<12; j++){
            sum[i] += exp[i][j];
        }
    }
    for(int i=0; i<size; i++){
        avg[i]=sum[i]/size;
    }
    printf("\n\nHere's the yearly average over the given range:\n");
    for(int i=range1; i<=range2; i++){
        printf("%d\t", avg[i]);
    }
}


int main(){
    int size=4;
    int startYear;
    printf("\nPlease enter the start year for your data: ");
    scanf("%d", &startYear);
    printf("\nPlease enter the number of years: ");
    scanf("%d", &size);
    int exp[100][12];
    printf("\nPlease enter the company's monthly expenditure sequentially:\n ");
    // Taking user input:
    for(int i = 0; i<size; i++){
        for(int j = 0; j<12; j++){
            printf("%d %d: ", i, j);
            scanf("%d", &exp[i][j]);
        }
    }
    
    displayTable(exp, size);
    displayMonthlyAvg(exp, size);
    displayYearlyAvg(exp, size);
    displayAvgOverTheRange(exp, size);
}