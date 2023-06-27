#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	char str[100];
	char c;
	int ans = 0, i;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character to find frequency: ");
	scanf("%c", &c);
	int size = strlen(str);
	for (i = 0; i < size; i++) {
		if (str[i] == c)
			ans++;
	}
	printf("Frequence of %c = %d", c, ans);
	return 0;
}