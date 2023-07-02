#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse_string(char str[], int l, int r) {
	if (l >= r)
		return;
	char temp = str[l];
	str[l] = str[r];
	str[r] = temp;
	reverse_string(str, l+1, r-1);
}

int main() {
	char str[100];
	printf("Enter a sentence: ");
	gets(str);
	reverse_string(str, 0, strlen(str)-1);
	printf("%s", str);
	return 0;
}