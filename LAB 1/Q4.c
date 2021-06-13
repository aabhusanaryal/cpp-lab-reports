// 4. Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    int roll;
    char address[20];
    long long int phone;
};

int main()
{
    int noOfStu=2;
    struct Student s[noOfStu];
    FILE *fp;

    fp = fopen("./db.txt", "w");
    for (int i = 0; i < noOfStu; i++)
    {
        printf("\nName (student %i): ", i+1);
        scanf("%s",s[i].name);

        printf("Roll (student %i): ", i+1);
        scanf("%d",&s[i].roll);

        printf("Address (student %i): ", i+1);
        scanf("%s",s[i].address);

        printf("Phone (student %i): ", i+1);
        scanf("%lld",&s[i].phone);

        fprintf(fp,"%s\n%d\n%s\n%lld\n",s[i].name,s[i].roll,s[i].address,s[i].phone);

    }
    fclose(fp);

    printf("\n\nRetreiving data\n");
    fp =fopen("./db.txt","r");
    for (int i = 0; i < noOfStu; i++)
    {
        fscanf(fp,"%s %d %s %lld",s[i].name, &s[i].roll, s[i].address, &s[i].phone);
    }

    int result;
    for (int i = 0; i < noOfStu - 1; i++)
    {
        for (int j = 0; j < noOfStu - 1 - i; j++)
        {
            result = strcmp(s[j].name, s[j + 1].name);
            if (result <= 0)
            {
                continue;
            }
            else
            {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n\nName\t|\tRoll\t|\tAddress\t|\tPhone\n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < noOfStu; i++)
    {
        printf("%s\t|\t%d\t|\t%s\t|\t%lld\n",s[i].name, s[i].roll,s[i].address,s[i].phone);
    }
    return 0;
} 