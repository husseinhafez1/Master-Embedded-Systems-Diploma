#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 

int main() {
	int m, *ab;
	m = 29;
	printf("Addres of m: 0x%x\n", &m);
	printf("Value of m: %d\n\n", m);
	printf("Now ab is assigned with the address of m.\n");
	ab = &m;
	printf("Address of the pointer ab: 0x%x\n", ab);
	printf("Content of the pointer ab: %d\n\n", *ab);
	printf("The value of m assigned to 34 now.\n");
	m = 34;
	printf("Address of pointer ab : 0x%x\n", ab);
	printf("Content of pointer ab : %d\n\n", *ab);
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	*ab = 7;
	printf("Addres of m: 0x%x\n", &m);
	printf("Value of m: %d\n\n", m);
	return 0;
}