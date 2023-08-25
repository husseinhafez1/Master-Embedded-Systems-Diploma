#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 

int main() {
	char alph[26];
	int i;
	char *ptr;
	printf("The alphabets are:\n");
	ptr = alph;
	for (i = 0; i < 26; i++) {
		*ptr = i+65;
		ptr++;
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", alph[i]);
	}
	return 0;
}