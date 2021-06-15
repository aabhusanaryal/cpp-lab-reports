#include<stdio.h>
struct Student {
	int marks;
	char name[50];
};
int main() {
	struct Student studs[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("enter name and marks obtained for student %i:\n",i+1);
		scanf("%s", studs[i].name);
		scanf("%d", &studs[i].marks);
	}

	for (i = 0; i < 5; i++) {
		printf("name:%s marks:%i\n", studs[i].name, studs[i].marks);
	}
	return 0;
}