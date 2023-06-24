#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char c;
	printf("Enter an alphabet: ");
	scanf("%c", &c);
	char a = tolower(c);
	char s[] = "aeiou";
	int i;
	int len = strlen(s);
	for (i = 0; i < len; i++) {
		if (a == s[i]) {
			printf("%c is a vowel", c);
			return 0;
		}
	}
	printf("%c is a conosonant", c);
	return 0;
}