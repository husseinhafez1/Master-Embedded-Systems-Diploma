#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 

int main() {
	char str[100];
	int i;
	char *ptr;
	printf("Input a string: ");
	scanf("%s", str);
	ptr = &str[strlen(str)-1];
	printf("Reverse of the string is: ");
	for (i = 0; i < (int)strlen(str); i++) {
		printf("%c", *ptr);
		ptr--;
	}
	return 0;
}