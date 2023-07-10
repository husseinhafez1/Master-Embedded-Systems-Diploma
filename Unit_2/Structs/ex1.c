#include <stdio.h>

struct student {
	char name[25];
	int roll;
	float marks;
};

void scanStudent(struct student *s) {
	printf("\nEnter information of students\n");
	printf("Enter name: ");
	gets(s->name);
	printf("Enter roll number: ");
	scanf("%d", &(s->roll));
	printf("Enter marks: ");
	scanf("%f", &(s->marks));
}

void printStudent(struct student s) {
	printf("\nDisplaying information\n");
	printf("name: %s\n", s.name);
	printf("roll: %d\n", s.roll);
	printf("marks: %f\n", s.marks);
}

int main() {
	struct student s;
	scanStudent(&s);
	printStudent(s);
	return 0;
}