//Prabigya Acharya
//Question number 2

#include <stdio.h>
#include <conio.h>

int main()
{
    int count = 0;
    char sentence[100] = "idea without execution is worthless";
    while (sentence[count] != 'c')
        count += 1;
    printf("The character c is at the position - %i", count+1);
    return 0;
}