//Program 2
//Write a program to find the position of the character 'C' in the sentence 
//"idea without execution is worthless" using pointer and string.
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