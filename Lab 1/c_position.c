#include<stdio.h>
int main() {
	int i=0;
	char* string = "idea without execution is worthless";
	while (string[i] != 'c') {
		i++;
	}
	printf("%i", i);
	return 0;
}