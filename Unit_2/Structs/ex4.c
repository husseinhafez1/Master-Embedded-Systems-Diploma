#include<stdio.h>

struct student {
	int roll;
	char name[25];
	int marks;
};

void scanStudents(struct student s[], int size) {
	printf("Enter information of students: \n\n");
	int i;
	for (i = 0; i < size; i++) {
		s[i].roll = i+1;
		printf("For roll number %d\n", i+1);
		printf("Enter name: ");
		gets(s[i].name);
		fflush(stdin);
		fflush(stdout);
		printf("Enter marks: ");
		scanf("%d", &(s[i].marks));
		fflush(stdin);
		fflush(stdout);
		printf("\n");
	}
}

void printStudents(struct student s[], int size) {
	printf("\nDisplaying information of students:\n\n");
	int i;
	for (i = 0; i < size; i++) {
		printf("Information for Roll number %d:\n", s[i].roll);
		printf("Name: %s\nMarks: %d\n\n", s[i].name, s[i].marks);
	}
}

int main() {
	struct student s[10];
	scanStudents(s, 10);
	printStudents(s, 10);	
	return 0;
}