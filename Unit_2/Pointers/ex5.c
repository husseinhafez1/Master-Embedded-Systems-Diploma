#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 

struct Semployee {
	char m_name[100];
	int m_id;
};

int main() {
	struct Semployee emp1={"Alex", 1002},emp2={"Hussein", 1003},emp3={"Ahmed", 1004};
	struct Semployee *arr[3] = {&emp1, &emp2, &emp3};
	struct Semployee *(*ptr)[3] = &arr;
	printf("Employee Name: %s\n", (*ptr)[0]->m_name);
	printf("Employee ID: %d\n", (*ptr)[0]->m_id);
	return 0;
}